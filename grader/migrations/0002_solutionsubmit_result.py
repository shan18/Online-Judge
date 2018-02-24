# -*- coding: utf-8 -*-
# Generated by Django 1.11.8 on 2018-02-24 06:27
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('grader', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='solutionsubmit',
            name='result',
            field=models.CharField(blank=True, choices=[('ac', 'AC'), ('wa', 'WA'), ('tle', 'TLE'), ('cte', 'CTE'), ('sigabrt', 'SIGABRT')], max_length=10, null=True),
        ),
    ]
