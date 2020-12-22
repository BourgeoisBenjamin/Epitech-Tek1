/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** delete_builtin
*/

#include "minishell2.h"

t_builtin **delete_builtin(t_builtin **builtin)
{
    for (int i = 0; builtin != NULL && builtin[i] != NULL; i++) {
        free(builtin[i]->name);
        free(builtin[i]);
    }
    if (builtin)
        free(builtin);
    return (NULL);
}
