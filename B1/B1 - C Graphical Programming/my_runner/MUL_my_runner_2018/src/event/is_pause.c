/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_pause
*/

#include <runner.h>

void is_pause(t_game *game, t_instance *instance)
{
    if (game->event.key.code == sfKeyEscape && instance->pause == 0) {
        instance->pause = 1;
    } else if (game->event.key.code == sfKeySpace && instance->pause == 1) {
        instance->pause = 0;
    }
}