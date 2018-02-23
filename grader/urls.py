from django.conf.urls import url

from .views import QuestionListView, QuestionDetailView


urlpatterns = [
    url(r'^$', QuestionListView.as_view(), name='question_list'),
    url(r'^(?P<code>[A-Z]+)/$', QuestionDetailView.as_view(), name='question_detail'),
]
