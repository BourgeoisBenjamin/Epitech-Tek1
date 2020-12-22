/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** manage_tower
*/

#include "defender.h"

void manage_tower(t_game_object *tower)
{
    float seconds;
    sfTime time = sfClock_getElapsedTime(tower->clock);
    seconds = time.microseconds / 10000.0;
    if (seconds < 1) {
        return;
    } else {
        sfSprite_setRotation(tower->sprite,
        sfSprite_getRotation(tower->sprite) + 2);
        sfClock_restart(tower->clock);
    }
}
