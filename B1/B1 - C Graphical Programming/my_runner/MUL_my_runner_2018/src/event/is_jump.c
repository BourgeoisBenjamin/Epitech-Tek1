/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_jump
*/

#include <runner.h>

void is_jump(t_game *game, t_instance *instance)
{
    if (game->event.type == sfEvtKeyPressed
        && game->event.key.code == sfKeySpace && instance->started
        && !instance->is_jump && !instance->is_fall) {
        instance->is_jump = 1;
        sfMusic_play(game->player->start->music);
    }
}