/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** special
*/

#include "rpg.h"

int special(t_rpg *game)
{
    game->player->on_fight->life -= game->player->attrib->damage;
    if (game->player->on_fight->life <= 0) {
        quit_fight_scene(game);
        return (0);
    }
    game->player->attrib->life -= game->player->on_fight->damage;
    if (game->player->attrib->life <= 0) {
        quit_fight_scene(game);
        return (0);
    }
    delete_tmp_fight_scene(game->scenes_array[FIGHT]);
    add_tmp_fight_scene(game->scenes_array[FIGHT], game->player,
    game->player->on_fight);
    return (0);
}
