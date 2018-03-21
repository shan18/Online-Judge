from django.conf import settings
from django.shortcuts import redirect
from django.utils.decorators import method_decorator

from .decorators import login_required_messsage_and_redirect


class LoginRequiredMixin(object):
    """ This mixin ensures that only logged in users can access the page """

    @method_decorator(login_required_messsage_and_redirect)
    def dispatch(self, request, *args, **kwargs):
        return super(LoginRequiredMixin, self).dispatch(request, *args, **kwargs)


class AnonymousRequiredMixin(object):
    """ This mixin ensures that logged in users cannot access the page """

    def dispatch(self, request, *args, **kwargs):
        if request.user.is_authenticated():
            return redirect(getattr(settings, 'LOGIN_URL_REDIRECT', '/'))
        return super(AnonymousRequiredMixin, self).dispatch(request, *args, **kwargs)


class RequestFormAttachMixin(object):
    """ This method is overriden to send additional data from the view to the form.
        In function based view, this can be done as "form = LoginForm(request=request)"
    """

    def get_form_kwargs(self):
        kwargs = super(RequestFormAttachMixin, self).get_form_kwargs()
        kwargs['request'] = self.request
        return kwargs
