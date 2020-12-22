/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** manage_move
*/

#include "defender.h"

void manage_move(t_game *game)
{
    for (t_game_object *tp = game->scenes_array[1]->objs; tp; tp = tp->next) {
        if (tp->type == ENEMY && game->instance->start) {
            manage_enemy(tp, game->scenes_array[1]->objs);
        }
        if (tp->type == TOWER)
            manage_tower(tp);
    }
}
