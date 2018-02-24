from django.shortcuts import render, redirect

from .forms import SolutionForm
from .utils import create_executable, compare
from questions.models import Question


def submit_solution(request, code):
    if request.method == 'POST':
        form = SolutionForm(request.POST, request.FILES)
        if form.is_valid():
            instance = form.save(commit=False)
            instance.question = Question.objects.get_by_code(code)
            instance.save()
            form.save()
            return redirect('home')
    else:
        form = SolutionForm()
    return render(request, 'grader/user_submission.html', {'form': form})


def check_solution(request, code):
    file = 'add.c'
    output = 'output'
    create_executable(file)
    result = compare(output)
    if result:
        return HttpResponse('Compiled successfully.')
    else:
        return HttpResponse('WA')
