# Code Warrior

An online judge system that supports the following languages:  
- C
- C++
- Java


## Instructions for setting up the project

Rename the file **credentials-sample.py** in *judge/* to **credentials.py** and replace the value of `SECRET_KEY` with the secret key of your own project. To generate a new secret key:  
	- Go to terminal and create a new django project `django-admin startproject <proj-name>`
	- Now get the value of `SECRET_KEY` in **settings.py** and use that as the secret key for the **Code-warrior project**.
	- Now delete that new django project.
