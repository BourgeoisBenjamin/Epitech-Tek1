/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_key_left
*/

#include "tetris.h"

int arg_key_left(t_settings *settings)
{
    if (optarg == NULL)
        return (-1);
    if (optarg[0] == '=')
        return (-1);
    if (my_strlen(optarg) == 0)
        return (-1);
    if (settings->key_left2)
        free(settings->key_left2);
    if ((settings->key_left2 = my_strdup(optarg)) == NULL)
        return (-1);
    return (0);
}
