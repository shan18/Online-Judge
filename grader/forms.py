from django import forms

from .models import SolutionSubmit


class SolutionSubmitForm(forms.ModelForm):

    class Meta:
        model = SolutionSubmit
        fields = ('email', 'solution')
