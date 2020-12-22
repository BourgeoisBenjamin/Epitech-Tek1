/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** create_venv
*/

#include "minishell2.h"

void create_venv(char *new_v, char *name, char *value)
{
    my_strcpy(new_v, name);
    my_strcat(new_v, "=");
    if (value != NULL)
        my_strcat(new_v, value);
}
