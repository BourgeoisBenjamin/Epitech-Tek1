/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** manage_jump
*/

#include <runner.h>

void jump(t_list *player_jump)
{
    move_rect(&player_jump->start->rect, player_jump->start->offset,
    player_jump->start->max_value);
    sfSprite_setTextureRect(player_jump->start->sprite,
    player_jump->start->rect);
}

void manage_jump(t_list *player_jump, t_instance *instance)
{
    if (player_jump->start->gravity == 0 && instance->is_jump == 1) {
        instance->is_jump = 2;
        return;
    } else if (player_jump->start->gravity == 36 && instance->is_jump == 2) {
        instance->is_jump = 0;
        player_jump->start->gravity--;
    }
    if (instance->is_jump == 1) {
        player_jump->start->position.y -= player_jump->start->gravity;
        player_jump->start->gravity--;
    } else if (instance->is_jump == 2) {
        player_jump->start->position.y += player_jump->start->gravity;
        player_jump->start->gravity++;
    }
    sfSprite_setPosition(player_jump->start->sprite,
    player_jump->start->position);
}