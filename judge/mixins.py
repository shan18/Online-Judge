from django.conf import settings
from django.shortcuts import redirect


class AnonymousRequiredMixin(object):
    """
    This mixin ensures that logged in users cannot access some pages.
    """

    def dispatch(self, request, *args, **kwargs):
        if request.user.is_authenticated():
            return redirect(getattr(settings, 'LOGIN_URL_REDIRECT', '/'))
        return super(AnonymousRequiredMixin, self).dispatch(request, *args, **kwargs)


class RequestFormAttachMixin(object):
    """
    This method is overriden to send additional data from the view to the form.
    In function based view, this can be done as "form = LoginForm(request=request)"
    """

    def get_form_kwargs(self):
        kwargs = super(RequestFormAttachMixin, self).get_form_kwargs()
        kwargs['request'] = self.request
        return kwargs
