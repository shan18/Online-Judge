from django.contrib import admin

from .models import UserSubmit, Question


admin.site.register(UserSubmit)
admin.site.register(Question)
