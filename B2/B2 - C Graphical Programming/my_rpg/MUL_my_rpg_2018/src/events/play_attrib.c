/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** play_attrib
*/

#include "rpg.h"

int play_attrib(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[INTRO]->clock);
    game->old_scene = game->scene;
    game->scene = INTRO;
    return (0);
}
