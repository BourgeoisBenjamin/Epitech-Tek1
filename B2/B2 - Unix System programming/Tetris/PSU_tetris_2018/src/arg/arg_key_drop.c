/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_key_drop
*/

#include "tetris.h"

int arg_key_drop(t_settings *settings)
{
    if (optarg == NULL)
        return (-1);
    if (my_strlen(optarg) == 0)
        return (-1);
    if (optarg[0] == '=')
        return (-1);
    if (settings->key_drop)
        free(settings->key_drop);
    if ((settings->key_drop = my_strdup(optarg)) == NULL)
        return (-1);
    return (0);
}
