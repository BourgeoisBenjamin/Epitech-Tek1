/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_key_pause
*/

#include "tetris.h"

int arg_key_pause(t_settings *settings)
{
    if (optarg == NULL)
        return (-1);
    if (my_strlen(optarg) == 0)
        return (-1);
    if (optarg[0] == '=')
        return (-1);
    if (settings->key_pause)
        free(settings->key_pause);
    if ((settings->key_pause = my_strdup(optarg)) == NULL)
        return (-1);
    return (0);
}
