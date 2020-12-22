/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** parallax
*/

#include <runner.h>

void parallax(t_list *parallax)
{
    float seconds;
    sfTime time = sfClock_getElapsedTime(parallax->clock);
    seconds = time.microseconds / 10000.0;
    if (seconds < 1)
        return;

    t_game_object *temp = parallax->start;
    sfClock_restart(parallax->clock);
    while (temp) {
        if (temp->position.x < -WIDTH) {
            temp->position.x = WIDTH - 10;
        }
        temp->position.x -= 1 * temp->vitesse;
        sfSprite_setPosition(temp->sprite, temp->position);
        temp = temp->next;
    }
}