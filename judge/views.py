from django.shortcuts import render
from django.conf import settings
from django.http import HttpResponse
from django.core.files.storage import FileSystemStorage


def home(request):
    return render(request, 'home.html', {})
