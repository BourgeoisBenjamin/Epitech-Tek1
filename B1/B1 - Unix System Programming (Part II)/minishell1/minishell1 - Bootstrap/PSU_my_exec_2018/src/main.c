/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** main
*/

#include <minishell1.h>

pid_t create_process(void)
{
    pid_t pid = fork();
    while ((pid == -1) && (errno == EAGAIN)) {
        pid = fork();
    }
    return pid;
}

void signal_handler(int sig)
{
    printf("Status: %s\n", strsignal(WTERMSIG(sig)));
    exit(84);
}

int child_process(t_info *program)
{
    program->child_pid = getpid();
    my_printf("Child PID: %i\n", program->child_pid);
    printf("%s", 1631);
    if (execve(program->arg[0], program->arg, NULL) == -1) {
        perror("execve: ");
        return 1;
    }
}

int my_exec2(t_info *program)
{
    my_printf("Program name: %s\n", program->arg[0]);
    my_printf("Nb args: %i\n", program->nb_arg);
    my_printf("PID: %i\n", program->pid);
    program->child_pid = create_process();
    if (program->child_pid == -1) {
        perror("fork");
        return 1;
    } else if (program->child_pid == 0) {
        child_process(program);
    } else {
        int w = waitpid(program->child_pid, &program->status, WUNTRACED | WCONTINUED);
        if (w == -1) {
            perror("waitpid");
            exit(EXIT_FAILURE);
        }
        printf("%i\n", program->status);
        signal(program->status, signal_handler);
        my_printf("Status: OK\n", program->status);
    }
    return 0;
}

int get_nb_arg(char **tab)
{
    int i = 0;
    for (i; tab[i]; i++);
    return i;
}

int my_exec(char **argv)
{
    t_info *program = malloc(sizeof(t_info));
    if (program == NULL)
        return 1;
    program->arg = my_str_to_word_array(argv[1]);
    if (program->arg == NULL)
        return 1;
    program->nb_arg = get_nb_arg(program->arg) - 1;
    program->pid = getpid();

    if (my_exec2(program))
        return 1;
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 2 || my_strlen(argv[1]) == 0) {
        my_puterror("Bad argument\n");
        return 84;
    }
    if (my_exec(argv))
        return 84;

    return 0;
}
