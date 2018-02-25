from django.shortcuts import render, redirect
from django.urls import reverse
from django.http import HttpResponse, Http404

from .forms import SolutionForm
from .autograder import run_submission
from .models import Solution
from questions.models import Question


def submit_solution(request, code):
    if request.method == 'POST':
        form = SolutionForm(request.POST, request.FILES)
        if form.is_valid():
            instance = form.save(commit=False)
            instance.question = Question.objects.get_by_code(code)
            instance.save()
            form.save()
            return redirect(reverse('grader:grade', kwargs={'code': code, 'pk': instance.pk}))
    else:
        form = SolutionForm()
    return render(request, 'grader/user_submission.html', {'form': form})


def check_solution(request, code, pk):
    qs = Solution.objects.get_latest_submission(code, pk)
    if qs.count() == 1:
        obj = qs.first()
        result = run_submission(obj.solution.name, obj.question.code)
        obj.result = result
        obj.save()
        return HttpResponse(result)
    raise Http404
