/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** manage_fall
*/

#include <runner.h>

void fall(t_list *player)
{
    player->start->position.y += 20;
    sfSprite_setPosition(player->start->sprite, player->start->position);
}

void manage_fall(t_game *game, t_instance *instance)
{
    if (is_on_platform(game, instance) && instance->is_jump != 1) {
        stop_fall(game, instance);
    } else if (instance->is_jump != 0) {
        manage_jump(game->player_jump, instance);
    } else {
        if (!(is_on_platform(game, instance))) {
            instance->is_fall = 1;
            fall(game->player);
        }
    }
}

void stop_fall(t_game *game, t_instance *instance)
{
    sfVector2f temp;
    if (instance->is_fall == 1 && instance->is_jump == 0) {
        temp = sfSprite_getPosition(game->player->start->sprite);
        game->player_jump->start->position = temp;
        sfSprite_setPosition(game->player_jump->start->sprite, temp);
    } else {
        temp = sfSprite_getPosition(game->player_jump->start->sprite);
        game->player->start->position = temp;
        sfSprite_setPosition(game->player->start->sprite, temp);
    }
    instance->is_jump = 0;
    instance->is_fall = 0;
    game->player_jump->start->gravity = 35;
}