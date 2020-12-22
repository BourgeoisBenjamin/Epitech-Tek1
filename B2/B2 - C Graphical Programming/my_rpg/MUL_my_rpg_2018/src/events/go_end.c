/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** go_end
*/

#include "rpg.h"

int go_end(t_rpg *game)
{
    if (!(GAME1 <= game->scene && game->scene <= GAME2))
        return (0);
    stop_all_music(game);
    restart_clock(game->scenes_array[END]->clock);
    game->old_scene = game->scene;
    game->scene = END;
    return (0);
}
