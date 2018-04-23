from django.views.generic import ListView, DetailView
from django.http import Http404
from django.db.models import Q, Max

from .models import Question
from judge.mixins import LoginRequiredMixin
from grader.models import Solution


class QuestionListView(LoginRequiredMixin, ListView):
    template_name = 'questions/list.html'
    
    def get_queryset(self):
        questions = Question.objects.all()
        user = self.request.user
        for ques in questions:
            marks = Solution.objects.filter(Q(user=user) & Q(question=ques)).aggregate(Max('score'))
            if marks['score__max'] is None:
                ques.marks_obtained = 0
            else:
                ques.marks_obtained=marks['score__max']
        return questions


class QuestionDetailView(LoginRequiredMixin, DetailView):
    template_name = 'questions/detail.html'

    def get_object(self, *args, **kwargs):
        request = self.request
        code = self.kwargs.get('code')
        instance = Question.objects.get_by_code(code)
        if instance is None:
            raise Http404('Question not found')
        return instance
