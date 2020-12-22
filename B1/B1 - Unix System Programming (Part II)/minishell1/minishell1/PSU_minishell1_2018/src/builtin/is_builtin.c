/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** is_builtin
*/

#include "minishell.h"

int is_builtin(t_info *program, t_builtin **builtin)
{
    int i = 0;
    while (builtin[i] != NULL) {
        if (my_strcmp(program->arg[0], builtin[i]->name) == 0
        && my_strlen(program->arg[0]) == my_strlen(builtin[i]->name)) {
            builtin[i]->ft(program);
            return 1;
        }
        i++;
    }
    return 0;
}
