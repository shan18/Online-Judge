import os
import subprocess
import filecmp

from django.conf import settings


def create_executable(file):
    name, ext = os.path.splitext(file)

    if ext == '.c':
        cmd = 'gcc -o {root}/{name} {root}/{file}'.format(root=settings.SUBMISSION_ROOT, name=name, file=file)
    elif ext == '.cpp':
        cmd = 'g++ -o {root}/{name} {root}/{file}'.format(root=settings.SUBMISSION_ROOT, name=name, file=file)
    elif ext == '.java':
        cmd = 'javac {root}/{file}'.format(root=settings.SUBMISSION_ROOT, file=file)

    process = subprocess.Popen(cmd.split(), stdout=subprocess.PIPE)
    output, error = process.communicate()

    execute(name, ext)


def execute(file, ext):
    os.chdir(settings.MEDIA_ROOT)
    if ext in ['.c', '.cpp']:
        cmd = './{executable} < input.txt > output.txt'.format(executable=file)
    elif ext == '.java':
        cmd = 'java {executable} < input.txt > output.txt'.format(executable=file)
        file += '.class'

    subprocess.check_output(cmd, shell=True)
    os.remove(os.path.join(settings.MEDIA_ROOT, file))


def compare(file):
    os.chdir(settings.MEDIA_ROOT)
    answer_file = file + '.txt'
    solution_file = file + '_expected' + '.txt'

    with open(answer_file) as answer, open(solution_file) as solution:
        answer_lines = answer.read()
        solution_lines = solution.read()
        if answer_lines == solution_lines:
            return True
        elif answer_lines[:-1] == solution_lines and answer_lines[-1] == '\n':
            return True
        else:
            return False

    # return filecmp.cmp(answer_file, solution_file)
