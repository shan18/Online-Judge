from django.db import models
from django.urls import reverse


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
        return reverse('question:detail', kwargs={'code': self.code})

    def get_submit_url(self):
        return reverse('grader:submit', kwargs={'code': self.code})


def upload_test_case_file_location(instance, filename):
    location = 'test_cases/{code}/inputs/'.format(code=instance.question.code)
    return location + filename


class TestCase(models.Model):
    question = models.ForeignKey(Question)
    file = models.FileField(upload_to=upload_test_case_file_location)
    timestamp = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.question.code + ' - ' + self.file.name.split('/')[-1]
