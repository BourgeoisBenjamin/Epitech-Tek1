/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** menu_settings
*/

#include "rpg.h"

int menu_settings(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[SETTINGS]->clock);
    game->old_scene = game->scene;
    game->scene = SETTINGS;
    return (0);
}
