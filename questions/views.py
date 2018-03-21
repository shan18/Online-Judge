from django.views.generic import ListView, DetailView
from django.http import Http404

from .models import Question
from judge.mixins import LoginRequiredMixin


class QuestionListView(LoginRequiredMixin, ListView):
    queryset = Question.objects.all()
    template_name = 'questions/list.html'


class QuestionDetailView(LoginRequiredMixin, DetailView):
    template_name = 'questions/detail.html'

    def get_object(self, *args, **kwargs):
        request = self.request
        code = self.kwargs.get('code')
        instance = Question.objects.get_by_code(code)
        if instance is None:
            raise Http404('Question not found')
        return instance
