from django import forms

from .models import UserSubmit


class UserSubmitForm(forms.ModelForm):

    class Meta:
        model = UserSubmit
        fields = ('email', 'submit_file')
