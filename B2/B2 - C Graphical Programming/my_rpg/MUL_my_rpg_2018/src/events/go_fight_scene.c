/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** go_fight_scene
*/

#include "rpg.h"

int go_fight_scene(t_rpg *game, t_npc *enemy)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[FIGHT]->clock);
    add_tmp_fight_scene(game->scenes_array[FIGHT], game->player, enemy);
    game->player->on_fight = enemy;
    game->actual_game = game->scene;
    game->old_scene = game->scene;
    game->scene = FIGHT;
    return (0);
}
