/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** is_same_key
*/

#include "tetris.h"

int is_same_key(t_settings *settings)
{
    char *exist_key[] = {settings->key_left2, settings->key_right2,
        settings->key_turn, settings->key_drop,
        settings->key_quit, settings->key_pause, NULL};

    for (int i = 0; exist_key[i]; i++) {
        for (int j = 0; exist_key[j]; j++) {
            if (i == j)
                continue;
            if (my_strcmp(exist_key[i], exist_key[j]) == 0
                && my_strlen(exist_key[i]) == my_strlen(exist_key[j]))
                return (1);
        }
    }
    return (0);
}
