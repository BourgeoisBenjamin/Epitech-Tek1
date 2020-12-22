/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_key_right
*/

#include "tetris.h"

int arg_key_right(t_settings *settings)
{
    if (optarg == NULL)
        return (-1);
    if (my_strlen(optarg) == 0)
        return (-1);
    if (optarg[0] == '=')
        return (-1);
    if (settings->key_right2)
        free(settings->key_right2);
    if ((settings->key_right2 = my_strdup(optarg)) == NULL)
        return (-1);
    return (0);
}
