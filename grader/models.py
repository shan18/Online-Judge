import os

from django.db import models
from django.urls import reverse


RESULT_TYPES = (
    ('ac', 'AC'),           # Correct Answer
    ('wa', 'WA'),           # Wrong Answer
    ('tle', 'TLE'),         # Time Limit Exceeded
    ('cte', 'CTE'),         # Compile Time Error
    ('sigabrt', 'SIGABRT')  # Runtime Error
)


class QuestionManager(models.Manager):

    def get_by_code(self, code):
        qs = self.get_queryset().filter(code=code)
        if qs.count() == 1:
            return qs.first()
        return None


class Question(models.Model):
    code = models.CharField(unique=True, max_length=10)
    title = models.CharField(unique=True, max_length=120)
    description = models.TextField()
    timestamp = models.DateTimeField(auto_now_add=True)

    objects = QuestionManager()

    def __str__(self):
        return self.code

    def get_absolute_url(self):
        return reverse('grader:question_detail', kwargs={'code': self.code})

    def get_submit_url(self):
        return reverse('grader:question_submit', kwargs={'code': self.code})


def upload_solution_file_location(instance, filename):
    location = 'submissions/{email}/'.format(email=instance.email)
    file, ext = os.path.splitext(filename)
    return location + instance.question.code + ext


class SolutionSubmit(models.Model):
    question = models.ForeignKey(Question)
    solution = models.FileField(upload_to=upload_solution_file_location)
    result = models.CharField(max_length=10, choices=RESULT_TYPES, null=True, blank=True)
    email = models.EmailField(max_length=120)
    uploaded_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.question.code
