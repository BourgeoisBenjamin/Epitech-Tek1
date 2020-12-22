/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_enemy
*/

#include <runner.h>

void enemy(t_game *game, t_instance *instance)
{
    sfVector2f p = game->player->start->position;
    sfVector2f pj = game->player_jump->start->position;
    for (t_game_object *temp = game->entities->start;temp;temp = temp->next) {
        sfTime time = sfClock_getElapsedTime(temp->clock);
        float seconds = time.microseconds / 1000000.0;
        if (seconds > 1 && (temp->type == 2 || temp->type == 3)) {
            if ((p.x + 110 > temp->position.x && temp->position.x + 170 > p.x
            && p.y + 170 > temp->position.y && temp->position.y + 170 > p.y
            && instance->is_jump == 0) || (pj.x + 110 > temp->position.x
            && temp->position.x + 170 > pj.x && pj.y + 170 > temp->position.y
            && temp->position.y + 170 > pj.y)) {
                sfMusic_play(temp->music);
                instance->life = instance->life - 1;
                delete_node(game->life);
                sfClock_restart(temp->clock);
                return;
            }
        }
    }
}