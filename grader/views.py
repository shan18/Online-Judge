from django.shortcuts import render, redirect
from django.views.generic import ListView, DetailView
from django.http import Http404

from .forms import SolutionSubmitForm
from .models import Question


class QuestionListView(ListView):
    queryset = Question.objects.all()
    template_name = 'grader/question_list.html'


class QuestionDetailView(DetailView):
    template_name = 'grader/question_detail.html'

    def get_object(self, *args, **kwargs):
        request = self.request
        code = self.kwargs.get('code')
        instance = Question.objects.get_by_code(code)
        if instance is None:
            raise Http404('Question not found')
        return instance


def submit_solution(request, code):
    if request.method == 'POST':
        form = SolutionSubmitForm(request.POST, request.FILES)
        if form.is_valid():
            instance = form.save(commit=False)
            instance.question = Question.objects.get_by_code(code)
            instance.save()
            form.save()
            return redirect('home')
    else:
        form = SolutionSubmitForm()
    return render(request, 'grader/user_submission.html', {'form': form})
