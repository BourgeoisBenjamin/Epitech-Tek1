/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** move_enemy
*/

#include "defender.h"

int direction_handler(t_game_object *enemy, sfVector2f pos_e, sfVector2f pos_r)
{
    if (pos_e.x < pos_r.x + 135 / 2) {
        sfSprite_setRotation(enemy->sprite, 0);
        pos_e.x += 5;
        sfSprite_setPosition(enemy->sprite, pos_e);
        return 1;
    }
    if (pos_e.y > pos_r.y + 135 / 2) {
        sfSprite_setRotation(enemy->sprite, -45);
        pos_e.y -= 5;
        sfSprite_setPosition(enemy->sprite, pos_e);
        return 1;
    }
    if (pos_e.y < pos_r.y - 135 / 2) {
        sfSprite_setRotation(enemy->sprite, 45);
        pos_e.x += 5;
        sfSprite_setPosition(enemy->sprite, pos_e);
        return 1;
    }
    return 0;
}

int move_enemy(t_game_object *enemy, t_game_object *road)
{
    sfVector2f pos_e = sfSprite_getPosition(enemy->sprite);
    sfVector2f pos_r = sfSprite_getPosition(road->sprite);

    if (pos_e.x > 1800) {
        sfSprite_setRotation(enemy->sprite,
        sfSprite_getRotation(enemy->sprite) - 2);
        return 1;
    }

    if (direction_handler(enemy, pos_e, pos_r))
        return 1;

    return 0;
}
