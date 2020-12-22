/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** event
*/

#include "defender.h"

void event(t_game *game)
{
    is_pause(game);
    check_click(game);
    windows_close(game);
}
