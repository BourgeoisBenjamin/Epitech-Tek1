/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** free_ft
*/

#include "minishell.h"

int free_builtin(t_builtin **builtin)
{
    for (int i = 0; builtin != NULL && builtin[i] != NULL; i++) {
        free(builtin[i]->name);
        free(builtin[i]);
    }
    free(builtin);
    return 0;
}

int free_child(t_info *program)
{
    free(program->path);
    free_array(program->env);
    free_array(program->arg);
    free(program);
    return 0;
}

int free_all(t_info *program, t_builtin **builtin)
{
    free_builtin(builtin);
    if (program->env)
        free_array(program->env);
    if (program->arg)
        free_array(program->arg);
    free(program);
    return 0;
}