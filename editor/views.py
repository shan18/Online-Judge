from django.shortcuts import render
from django.conf import settings
from django.http import HttpResponse
from django.core.files.storage import FileSystemStorage

from .utils import create_executable, compare


def home(request):
    if request.method == 'POST' and request.FILES['code']:
        file = request.FILES['code']
        fs = FileSystemStorage()
        filename = fs.save(file.name, file)
        uploaded_file_url = fs.url(filename)
        return render(request, 'home.html', {
            'uploaded_file_url': uploaded_file_url
        })
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
