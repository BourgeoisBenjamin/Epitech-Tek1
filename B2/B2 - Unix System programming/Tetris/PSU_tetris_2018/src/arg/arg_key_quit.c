/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_key_quit
*/

#include "tetris.h"

int arg_key_quit(t_settings *settings)
{
    if (optarg == NULL)
        return (-1);
    if (my_strlen(optarg) == 0)
        return (-1);
    if (optarg[0] == '=')
        return (-1);
    if (settings->key_quit)
        free(settings->key_quit);
    if ((settings->key_quit = my_strdup(optarg)) == NULL)
        return (-1);
    return (0);
}
