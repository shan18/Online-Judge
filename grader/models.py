import os
import subprocess

from django.conf import settings
from django.db import models
from django.db.models.signals import pre_save
from django.contrib.auth import get_user_model

from questions.models import Question, TestCase, ExpectedOutput


User = get_user_model()

RESULT_TYPES = (
    ('ac', 'AC'),           # Correct Answer
    ('wa', 'WA'),           # Wrong Answer
    ('tle', 'TLE'),         # Time Limit Exceeded
    ('cte', 'CTE'),         # Compile Time Error
    ('sigabrt', 'SIGABRT')  # Runtime Error
)


def upload_solution_file_location(instance, filename):
    location = 'submissions/{username}/'.format(username=instance.user.username)
    file, ext = os.path.splitext(filename)
    return location + instance.question.code + ext


class SolutionQuerySet(models.query.QuerySet):

    def get_by_question(self, question_code):
        return self.filter(question__code=question_code)

    def get_by_user(self, username):
        return self.filter(user__username=username)

    def get_by_user_question(self, username, question_code):
        return self.get_by_user(username).get_by_question(question_code)


class SolutionManager(models.Manager):

    def get_queryset(self):
        return SolutionQuerySet(self.model, using=self._db)

    def get_by_user(self, username):
        return self.get_queryset().get_by_user(username=username)

    def get_by_question(self, question_code):
        return self.get_queryset().get_by_question(question_code)

    def get_by_user_question(self, username, question_code):
        return self.get_queryset().get_by_user_question(username, question_code)


class Solution(models.Model):
    question = models.ForeignKey(Question)
    user = models.ForeignKey(User)
    file = models.FileField(upload_to=upload_solution_file_location)
    language = models.CharField(max_length=10)
    result = models.CharField(max_length=10, choices=RESULT_TYPES, null=True, blank=True)
    score = models.IntegerField(default=0)
    timestamp = models.DateTimeField(auto_now_add=True)

    objects = SolutionManager()

    class Meta:
        ordering = ['-score', 'timestamp']

    def __str__(self):
        return self.user.username + ' - ' + self.question.code

    @property
    def filename(self):
        """ Returns the name of the uploaded file without the extension """
        filename, ext = os.path.splitext(self.file.name)
        return filename.split('/')[-1]

    def get_absolute_url(self):
        return self.file.url

    def delete_executable(self):
        name = self.filename
        if self.language == 'java':
            name += '.class'
        if os.path.exists(name):
            os.remove(name)

    def compile(self):
        name = self.filename
        if self.language == 'c':
            cmd = 'gcc -o {name} {name}.c'.format(name=name)
        elif self.language == 'cpp':
            cmd = 'g++ -o {name} {name}.cpp'.format(name=name)
        elif self.language == 'java':
            cmd = 'javac {name}.java'.format(name=name)
        elif 'py' in self.language:
            return 'success'
        else:
            return 'cte'  # Compile Time Error

        try:
            process = subprocess.check_output(cmd, shell=True)
        except subprocess.CalledProcessError:
            return 'cte'  # Compile Time Error
        return 'success'

    def execute(self, input_test_case):
        name = self.filename
        if self.language in ['c', 'cpp']:
            cmd = './{name} < {input_file} > {name}.txt'.format(name=name, input_file=input_test_case)
        elif self.language == 'java':
            cmd = 'java {name} < {input_file} > {name}.txt'.format(name=name, input_file=input_test_case)
        elif self.language == 'py2':
            cmd = 'python2 {name}.py < {input_file} > {name}.txt'.format(name=name, input_file=input_test_case)
        elif self.language == 'py3':
            cmd = 'python3 {name}.py < {input_file} > {name}.txt'.format(name=name, input_file=input_test_case)
        else:
            return None

        try:
            process = subprocess.check_output(cmd, shell=True, timeout=1)
        except subprocess.CalledProcessError:
            return 'sigabrt'  # Runtime Error
        except subprocess.TimeoutExpired:
            return 'tle'  # Time Limit Exceeded
        return 'success'

    def verify(self, expected_output):
        output = self.filename + '.txt'
        with open(output) as answer, open(expected_output) as solution:
            answer_lines = answer.readlines()
            solution_lines = solution.readlines()
            for i, j in zip(answer_lines, solution_lines):
                if i.strip() != j.strip():
                    return False
            return True

    def evaluate(self):
        os.chdir(os.path.join(settings.MEDIA_ROOT, os.path.dirname(self.file.name)))
        if self.compile() != 'success':
            return 'cte'

        tc_input_dir_contents = TestCase.objects.get_by_question(self.question.code)
        tc_output_dir_contents = ExpectedOutput.objects.get_by_question(self.question.code)

        name = self.filename

        for t_in, t_out in zip(tc_input_dir_contents, tc_output_dir_contents):
            msg = self.execute(os.path.join(settings.MEDIA_ROOT, t_in.file.name))
            if msg != 'success':
                self.delete_executable()
                return msg
            t = ExpectedOutput.objects.get_by_question_test_case(self.question.code, t_in).first()
            if not self.verify(os.path.join(settings.MEDIA_ROOT, t.file.name)):
                self.delete_executable()
                return 'wa'
        self.delete_executable()
        return 'ac'


def solution_pre_save_receiver(sender, instance, *args, **kwargs):
    if instance.language is None:
        name, ext = os.path.splitext(instance.file.name)
        lang = ext[1:]
        if lang == 'py':
            lang = 'py3'
        instance.language = lang

pre_save.connect(solution_pre_save_receiver, sender=Solution)
