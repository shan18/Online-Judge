# -*- coding: utf-8 -*-
# Generated by Django 1.11.8 on 2018-04-23 20:57
from __future__ import unicode_literals

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('accounts', '0002_emailactivation'),
    ]

    operations = [
        migrations.AlterModelOptions(
            name='user',
            options={'ordering': ['-score', 'timestamp']},
        ),
    ]
