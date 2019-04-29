from django.conf.urls import url

from .views import QuestionListView, QuestionDetailView


app_name = 'question'


urlpatterns = [
    url(r'^$', QuestionListView.as_view(), name='list'),
    url(r'^(?P<code>[A-Z]+)/$', QuestionDetailView.as_view(), name='detail'),
]
