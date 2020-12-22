/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** windows_close
*/

#include "defender.h"

void windows_close(t_game *game)
{
    if (game->event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(game->window);
}
