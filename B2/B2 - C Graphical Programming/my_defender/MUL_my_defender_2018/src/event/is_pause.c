/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** is_pause
*/

#include "defender.h"

void is_pause(t_game *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && game->instance->scene == 1)
        game->instance->scene = 2;
}
