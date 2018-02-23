from django.conf import settings
from django.conf.urls import url, include
from django.contrib import admin
from django.conf.urls.static import static

from .views import home, compile_code


urlpatterns = [
    url(r'^$', home, name='home'),
    url(r'^compile/$', compile_code, name='compile'),
    url(r'^question/', include('grader.urls', namespace='grader')),
    url(r'^admin/', admin.site.urls),
]

if settings.DEBUG:
    # urlpatterns += static(settings.STATIC_URL, document_root=settings.STATIC_ROOT)
    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
