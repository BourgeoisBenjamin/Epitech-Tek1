/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** go_update_attrib
*/

#include "rpg.h"

int go_update_attrib(t_rpg *game)
{
    if (game->scene == UPDATE_ATTRIB)
        return (continue_game(game));
    if (!(GAME1 <= game->scene && game->scene <= GAME2))
        return (0);
    restart_clock(game->scenes_array[UPDATE_ATTRIB]->clock);
    game->old_scene = game->scene;
    game->scene = UPDATE_ATTRIB;
    return (0);
}
