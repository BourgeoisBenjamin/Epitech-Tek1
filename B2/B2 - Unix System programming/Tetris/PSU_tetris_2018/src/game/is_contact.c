/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** is_contact
*/

#include "tetris.h"

bool is_contact(t_settings *settings, char **game, char **decor)
{
    for (int i = 0; i < settings->row + 1; i++) {
        for (int j = 0; j < settings->col + 2; j++) {
            if (game[i][j] != ' ' && decor[i][j] != '*')
                return false;
        }
    }
    return true;
}
