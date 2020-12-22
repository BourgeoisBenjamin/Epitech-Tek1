/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** delete_settings
*/

#include "tetris.h"

void delete_settings(t_settings *settings)
{
    if (settings == NULL)
        return;
    if (settings->key_left2)
        free(settings->key_left2);
    if (settings->key_right2)
        free(settings->key_right2);
    if (settings->key_turn)
        free(settings->key_turn);
    if (settings->key_drop)
        free(settings->key_drop);
    if (settings->key_quit)
        free(settings->key_quit);
    if (settings->key_pause)
        free(settings->key_pause);
    free(settings);
}
