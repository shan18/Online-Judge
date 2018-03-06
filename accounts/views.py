from django.shortcuts import render, redirect
from django.http import Http404
from django.contrib.auth import authenticate, login, get_user_model

from .forms import LoginForm, RegisterForm


User = get_user_model()


def leaderboard_view(request):
    qs = User.objects.all()
    return render(request, 'accounts/leaderboard.html', {'object_list': qs})


def login_page(request):
    if request.user.is_authenticated:
        return redirect('home')

    form = LoginForm(request.POST or None)
    context = {
        'form': form
    }
    if form.is_valid():
        username = form.cleaned_data.get('username')
        password = form.cleaned_data.get('password')
        user = authenticate(request, username=username, password=password)
        if user is not None:
            login(request, user)
            return redirect('home')
        else:
            # TODO: Replace this with proper error
            raise Http404
    return render(request, 'accounts/login.html', context)


def register_page(request):
    if request.user.is_authenticated:
        return redirect('home')

    form = RegisterForm(request.POST or None)
    context = {
        'form': form
    }
    if form.is_valid():
        form.save()
        return redirect('login')
    return render(request, 'accounts/register.html', context)
