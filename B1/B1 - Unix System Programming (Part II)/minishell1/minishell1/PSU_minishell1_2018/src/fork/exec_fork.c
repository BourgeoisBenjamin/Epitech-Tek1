/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** exec_fork
*/

#include "minishell.h"

int exec_cmd(t_info *program, t_builtin **builtin)
{
    if (is_builtin(program, builtin))
        return 0;
    else
        exec_fork(program);
    return 0;
}

int exec_fork(t_info *program)
{
    program->child_pid = create_process();
    if (program->child_pid == -1) {
        perror("fork :");
        return EXIT_FAILURE;
    }
    if (program->child_pid == 0) {
        child_process(program);
    } else {
        parent_process(program);
    }
    return EXIT_SUCCESS;
}
