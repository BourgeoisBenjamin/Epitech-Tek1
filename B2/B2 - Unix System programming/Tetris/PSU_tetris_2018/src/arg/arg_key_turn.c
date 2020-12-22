/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_key_turn
*/

#include "tetris.h"

int arg_key_turn(t_settings *settings)
{
    if (optarg == NULL)
        return (-1);
    if (my_strlen(optarg) == 0)
        return (-1);
    if (optarg[0] == '=')
        return (-1);
    if (settings->key_turn)
        free(settings->key_turn);
    if ((settings->key_turn = my_strdup(optarg)) == NULL)
        return (-1);
    return (0);
}
