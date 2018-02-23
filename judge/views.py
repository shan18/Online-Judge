from django.shortcuts import render
from django.conf import settings
from django.http import HttpResponse
from django.core.files.storage import FileSystemStorage

from .utils import create_executable, compare


def home(request):
    return render(request, 'home.html', {})


def compile_code(request):
    file = 's.java'
    output = 'output'
    create_executable(file)
    result = compare(output)
    print(result)
    if result:
        return HttpResponse('Compiled successfully.')
    else:
        return HttpResponse('WA')
