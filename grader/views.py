from django.shortcuts import render, redirect
from django.views.generic import ListView, DetailView
from django.http import Http404

from .forms import UserSubmitForm
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



def user_submission(request):
    if request.method == 'POST':
        form = UserSubmitForm(request.POST, request.FILES)
        if form.is_valid():
            form.save()
            return redirect('home')
    else:
        form = UserSubmitForm()
    return render(request, 'grader/user_submission.html', {'form': form})
