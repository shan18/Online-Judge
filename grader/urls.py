from django.conf.urls import url

from .views import submit_solution, check_solution


urlpatterns = [
    url(r'^(?P<code>[A-Z]+)/submit/$', submit_solution, name='submit'),
    url(r'^(?P<code>[A-Z]+)/grade/(?P<pk>\d+)$', check_solution, name='grade'),
]
