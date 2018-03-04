from django.shortcuts import render, redirect
from django.urls import reverse
from django.http import HttpResponse, Http404
from django.contrib.auth.decorators import login_required

from .forms import SolutionForm
from .autograder import run_submission
from .models import Solution
from questions.models import Question


@login_required
def submit_solution(request, code):
    if request.method == 'POST':
        form = SolutionForm(request.POST, request.FILES)
        if form.is_valid():
            instance = form.save(commit=False)
            instance.question = Question.objects.get_by_code(code)
            instance.user = request.user
            instance.save()
            form.save()
            return redirect(reverse('grader:grade', kwargs={'code': code, 'pk': instance.pk}))
    else:
        form = SolutionForm()
    return render(request, 'grader/user_submission.html', {'form': form})


@login_required
def check_solution(request, code, pk):
    qs = Solution.objects.get_latest_submission(code, pk)
    if qs.count() == 1:
        obj = qs.first()
        if obj.result == 'ac':
            return HttpResponse('already')
        result = run_submission(obj.solution.name, obj.question.code)
        obj.result = result
        if obj.result == 'ac':
            obj.score = 100
        obj.save()
        qs = Solution.objects.get_by_code(code).filter(user=request.user).exclude(pk=obj.id).order_by('-score').first()
        if qs is not None:
            if obj.score > qs.score and  result == 'ac':
                print(obj.user.increment_score(100))
        else:
            print(obj.user.increment_score(100))
        return HttpResponse(result)
    raise Http404
