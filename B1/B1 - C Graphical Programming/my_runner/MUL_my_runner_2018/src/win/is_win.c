/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_win
*/

#include <runner.h>

void is_win(t_game *game, t_instance *instance)
{
    sfVector2f p = game->player->start->position;
    sfVector2f pj = game->player_jump->start->position;

    for (t_game_object *temp = game->entities->start;temp;temp = temp->next) {
        if (temp->type == 4) {
            if ((p.x + 40 > temp->position.x && temp->position.x + 50 > p.x
            && p.y + 180 > temp->position.y && temp->position.y + 180 > p.y
            && instance->is_jump == 0) || (pj.x + 40 > temp->position.x
            && temp->position.x + 50 > pj.x && pj.y + 180 > temp->position.y
            && temp->position.y + 180 > pj.y)) {
                sfMusic_play(game->win->start->music);
                instance->win = 1;
                return;
            }
        }
    }
}