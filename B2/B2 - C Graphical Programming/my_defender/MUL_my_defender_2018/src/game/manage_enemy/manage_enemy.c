/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** manage_enemy
*/

#include "defender.h"

void manage_enemy(t_game_object *enemy, t_game_object *list_obj)
{
    float seconds;
    sfTime time = sfClock_getElapsedTime(enemy->clock);
    seconds = time.microseconds / 10000.0;
    if (seconds < 1)
        return;

    for (t_game_object *road = list_obj; road; road = road->next) {
        if (road->type == ROAD)
            if (move_enemy(enemy, road))
                break;
    }
    move_rect(&enemy->rect, enemy->offset, enemy->max_value);
    sfSprite_setTextureRect(enemy->sprite, enemy->rect);
    sfClock_restart(enemy->clock);
}
