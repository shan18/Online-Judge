from django.conf import settings
from django.shortcuts import redirect


class AnonymousRequiredMixin(object):

    def dispatch(self, request, *args, **kwargs):
        if request.user.is_authenticated():
            return redirect(getattr(settings, 'LOGIN_URL_REDIRECT', '/'))
        return super(AnonymousRequiredMixin, self).dispatch(request, *args, **kwargs)
