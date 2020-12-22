/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** parent_process
*/

#include "minishell.h"

void test_segfault(t_info *program)
{
    if (WCOREDUMP(program->status)) {
        my_printe("Segmentation fault (core dumped)\n");
    } else {
        my_printe("Segmentation fault\n");
    }
}

void parent_process(t_info *program)
{
    waitpid(program->child_pid, &program->status, WUNTRACED | WCONTINUED);
    if (WIFSIGNALED(program->status)) {
        if (WTERMSIG(program->status) == SIGSEGV) {
            test_segfault(program);
        }
        if (WTERMSIG(program->status) == 8)
            my_printe("Floating exception\n");
    }
}
