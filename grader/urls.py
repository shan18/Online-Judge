from django.conf.urls import url

from .views import QuestionListView, QuestionDetailView, submit_solution


urlpatterns = [
    url(r'^$', QuestionListView.as_view(), name='question_list'),
    url(r'^(?P<code>[A-Z]+)/$', QuestionDetailView.as_view(), name='question_detail'),
    url(r'^(?P<code>[A-Z]+)/submit/$', submit_solution, name='question_submit'),
]
