/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** exec_cd
*/

#include "minishell.h"

int exec_cd(t_info *program)
{
    if (program->arg[1] == NULL) {
        char *home = search_env(program->env, "HOME=");
        if (home == NULL || home[0] == '\0') {
            free(home);
            my_printe("cd: no home find in env.\n");
            return -1;
        } else if (change_dir(home) == -1) {
            free(home);
            return -1;
        }
        free(home);
    } else if (program->arg[1][0] == '-') {
        if (change_old_dir(program) == -1)
            return -1;
    } else {
        if (change_dir(program->arg[1]) == -1)
            return -1;
    }
    return 0;
}
