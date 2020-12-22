/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** quit_fight_scene
*/

#include "rpg.h"

int quit_fight_scene(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[game->actual_game]->clock);
    delete_tmp_fight_scene(game->scenes_array[FIGHT]);
    if (game->player->on_fight->type != SENSEI)
        game->player->on_fight->type = BABY;
    game->scenes_array[game->actual_game]->nb_fight++;
    game->player->on_fight = NULL;
    game->old_scene = game->scene;
    game->scene = game->actual_game;
    return (0);
}
