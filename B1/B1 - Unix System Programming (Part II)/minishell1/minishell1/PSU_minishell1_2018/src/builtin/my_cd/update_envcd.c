/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** update_envcd
*/

#include "minishell.h"

int update_envcd(t_info *program, char *old_pwd)
{
    char *actual_pwd = malloc(sizeof(char) * PATH_MAX + 1);
    if (actual_pwd == NULL) {
        my_printe("malloc() failed, please_retry\n");
        free(old_pwd);
        return -1;
    }
    if (getcwd(actual_pwd, PATH_MAX) == NULL) {
        my_printe("getcwd() failed, please_retry\n");
        free(old_pwd);
        return -1;
    }
    program->env = replace_venv(program->env, "PWD", actual_pwd);
    program->env = replace_venv(program->env, "OLDPWD", old_pwd);
    free(actual_pwd);
    free(old_pwd);
    return 0;
}
