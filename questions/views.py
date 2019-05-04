import time
import pytz
from datetime import datetime
from datetime import date
from datetime import time
from datetime import timedelta

from django.utils.timezone import localtime, now
from django.views.generic import ListView, DetailView
from django.http import Http404
from django.db.models import Q, Max

from .models import Question
from judge.mixins import LoginRequiredMixin
from grader.models import Solution
from grader.utils import start_time

class QuestionListView(LoginRequiredMixin, ListView):
    template_name = 'questions/list.html'
    context_object_name='alert'


    def get_context_data(self, **kwargs):
        # Call the base implementation first to get the context
        context = super(QuestionListView, self).get_context_data(**kwargs)

        if self.request.user and not self.request.user.is_admin:
            current_time = datetime.now()
            if current_time <= start_time:
                context['error'] = 'Contest has not started yet'
        return context

    def get_queryset(self):
        if self.request.user and not self.request.user.is_admin:
            current_time = datetime.now()
            if current_time <=start_time:
                self.template_name = 'home.html'

        questions = Question.objects.all()
        user = self.request.user
        for ques in questions:
            marks = Solution.objects.filter(Q(user=user) & Q(question=ques)).aggregate(Max('score'))
            if marks['score__max'] is None:
                ques.marks_obtained = 0
            else:
                ques.marks_obtained = marks['score__max']
        return questions


class QuestionDetailView(LoginRequiredMixin, DetailView):
    template_name = 'questions/detail.html'

    def get_context_data(self, **kwargs):
        # Call the base implementation first to get the context
        context = super(QuestionDetailView, self).get_context_data(**kwargs)
        if self.request.user and not self.request.user.is_admin:
            current_time = datetime.now()
            future = start_time + timedelta(hours=96)
            if current_time > future:
                context['error'] = 'Contest has ended.'
        return context

    def get_object(self, *args, **kwargs):
        request = self.request
        code = self.kwargs.get('code')
        instance = Question.objects.get_by_code(code)
        if instance is None:
            raise Http404('Question not found')
        return instance
