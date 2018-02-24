import os

from django.db import models

from questions.models import Question


RESULT_TYPES = (
    ('ac', 'AC'),           # Correct Answer
    ('wa', 'WA'),           # Wrong Answer
    ('tle', 'TLE'),         # Time Limit Exceeded
    ('cte', 'CTE'),         # Compile Time Error
    ('sigabrt', 'SIGABRT')  # Runtime Error
)


def upload_solution_file_location(instance, filename):
    location = 'submissions/{email}/'.format(email=instance.email)
    file, ext = os.path.splitext(filename)
    return location + instance.question.code + ext


class SolutionQuerySet(models.query.QuerySet):

    def get_by_code(self, code):
        return self.filter(question__code=code)

    def get_by_email(self, email):
        return self.filter(email=email)

    def get_by_id(self, pk):
        return self.filter(pk=pk)


class SolutionManager(models.Manager):

    def get_queryset(self):
        return SolutionQuerySet(self.model, using=self._db)

    def get_by_code(self, code):
        return self.get_queryset().get_by_code(code)

    def get_by_email(self, email):
        return self.get_queryset().get_by_email(email)

    def get_by_id(self, pk):
        return self.get_queryset().get_by_id(pk)

    def get_latest_submission(self, code, pk):
        return self.get_by_code(code).get_by_id(pk)


class Solution(models.Model):
    question = models.ForeignKey(Question)
    solution = models.FileField(upload_to=upload_solution_file_location)
    result = models.CharField(max_length=10, choices=RESULT_TYPES, null=True, blank=True)
    email = models.EmailField(max_length=120)
    uploaded_at = models.DateTimeField(auto_now_add=True)

    objects = SolutionManager()

    def __str__(self):
        return self.question.code