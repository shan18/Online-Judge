import os
import subprocess
import filecmp

from django.conf import settings


def get_compile_command(filename, ext):
    if ext == '.c':
        cmd = 'gcc -o {name} {name}.c'.format(name=filename)
    elif ext == '.cpp':
        cmd = 'g++ -o {name} {name}.cpp'.format(name=filename)
    elif ext == '.java':
        cmd = 'javac {name}.java'.format(name=filename)
    return cmd


def get_execute_command(filename, ext, input_test_case):
    if ext in ['.c', '.cpp']:
        cmd = './{name} < {input_file} > {name}.txt'.format(name=filename, input_file=input_test_case)
    elif ext == '.java':
        cmd = 'java {name} < {input_file} > {name}.txt'.format(name=filename, input_file=input_test_case)
    return cmd


def verify_solution(output, expected_output):

    with open(output) as answer, open(expected_output) as solution:
        answer_lines = answer.read()
        solution_lines = solution.read()
        if answer_lines == solution_lines:
            return True
        elif answer_lines[:-1] == solution_lines and answer_lines[-1] == '\n':
            return True
        else:
            return False

    # return filecmp.cmp(answer_file, solution_file)


def run_submission(file, question_code):
    path_contents = file.split('/')
    user_submission_root = '/'.join(path_contents[:-1])
    submit_file, ext = os.path.splitext(path_contents[-1])
    root = os.path.join(settings.MEDIA_ROOT, user_submission_root)
    os.chdir(root)

    cmd_compile = get_compile_command(submit_file, ext)
    process = subprocess.Popen(cmd_compile.split(), stdout=subprocess.PIPE)
    output, error = process.communicate()

    tc_input_dir = os.path.join(settings.TEST_CASES_ROOT, question_code, 'inputs')
    tc_input_dir_contents = sorted(os.listdir(tc_input_dir))
    tc_output_dir = os.path.join(settings.TEST_CASES_ROOT, question_code, 'outputs')
    tc_output_dir_contents = sorted(os.listdir(tc_output_dir))

    output_file = submit_file + '.txt'

    for t_in, t_out in zip(tc_input_dir_contents, tc_output_dir_contents):
        # execute submission
        cmd_execute = get_execute_command(submit_file, ext, os.path.join(tc_input_dir, t_in))
        k = subprocess.check_output(cmd_execute, shell=True)

        # compare with expected output
        if not verify_solution(output_file, os.path.join(tc_output_dir, t_out)):
            if ext == '.java':
                submit_file += '.class'
            os.remove(submit_file)
            return False

    if ext == '.java':
        submit_file += '.class'
    os.remove(submit_file)
    return True
