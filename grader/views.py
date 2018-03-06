from django.shortcuts import render, redirect
from django.urls import reverse
from django.http import HttpResponse, Http404
from django.contrib.auth.decorators import login_required

from .forms import SolutionForm
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
    qs = Solution.objects.get_by_user_question(request.user.username, code)
    submission = qs.filter(pk=pk).first()
    if submission is None:
        raise Http404

    if submission.result is not None:
        return HttpResponse(submission.result)
    result = submission.evaluate()
    submission.result = result

    if submission.result == 'ac':
        submission.score = 100
        previous_max_submission = qs.exclude(pk=submission.id).first()
        if previous_max_submission is not None:
            score_diff = submission.score - previous_max_submission.score
            if score_diff > 0:
                submission.user.increment_score(score_diff)
        else:
            submission.user.increment_score(100)
    submission.save()

    return HttpResponse(submission.result)
