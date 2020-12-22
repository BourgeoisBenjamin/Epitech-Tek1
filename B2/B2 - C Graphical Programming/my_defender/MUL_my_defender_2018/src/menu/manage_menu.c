/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** manage_menu
*/

#include "defender.h"

void move_menu(t_game_object *tp)
{
    float seconds;
    sfTime time = sfClock_getElapsedTime(tp->clock);
    seconds = time.microseconds / 10000.0;
    if (seconds < 1) {
        return;
    } else {
        tp->position.x += 5;
        if (tp->position.x > 2040)
            tp->position.x = 0;
        move_rect(&tp->rect, tp->offset, tp->max_value);
        sfSprite_setTextureRect(tp->sprite, tp->rect);
        sfSprite_setPosition(tp->sprite, tp->position);
        sfClock_restart(tp->clock);
    }
}

void manage_menu(t_game *game)
{
    for (t_game_object *tp = game->scenes_array[0]->objs; tp; tp = tp->next) {
        if (tp->type == ENEMY) {
            move_menu(tp);
        }
    }
}
