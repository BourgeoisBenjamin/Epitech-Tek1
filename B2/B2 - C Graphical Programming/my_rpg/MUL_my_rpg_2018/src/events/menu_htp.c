/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** menu_htp
*/

#include "rpg.h"

int menu_htp(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[HOWTOPLAY]->clock);
    game->old_scene = game->scene;
    game->scene = HOWTOPLAY;
    return (0);
}
