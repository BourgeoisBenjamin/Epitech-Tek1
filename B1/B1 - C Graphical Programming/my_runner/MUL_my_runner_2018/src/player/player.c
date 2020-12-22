/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_player
*/

#include <runner.h>

void player(t_game *game, t_instance *instance)
{
    manage_fall(game, instance);
    float seconds;
    sfTime time = sfClock_getElapsedTime(game->player->clock);
    seconds = time.microseconds / 100000.0;
    if (seconds < 1)
        return;
    if (instance->is_jump != 0)
        jump(game->player_jump);
    else {
        move_rect(&game->player->start->rect, game->player->start->offset,
        game->player->start->max_value);
    }
    sfSprite_setTextureRect(game->player->start->sprite,
    game->player->start->rect);
    sfClock_restart(game->player->clock);
}