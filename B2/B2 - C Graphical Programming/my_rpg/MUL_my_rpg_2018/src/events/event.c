/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** event
*/

#include "rpg.h"

int event(t_rpg *game)
{
    if (event_button(game->window, game->event, game->scenes_array[game->scene],
        game) == -1)
        return (-1);
    if (event_keyboard(game) == -1)
        return (-1);
    if (window_close(game->event, game->window) == -1)
        return (-1);
    return (0);
}
