/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** is_builtin
*/

#include "minishell2.h"

int is_builtin(char *name, t_builtin **builtin)
{
    int i = 0;
    while (builtin[i] != NULL) {
        if (my_strcmp(name, builtin[i]->name) == 0
        && my_strlen(name) == my_strlen(builtin[i]->name)) {
            return (i);
        }
        i++;
    }
    return (-1);
}
