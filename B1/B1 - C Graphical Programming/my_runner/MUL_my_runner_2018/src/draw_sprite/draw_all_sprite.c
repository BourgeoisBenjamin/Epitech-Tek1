/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** draw_all_sprite
*/

#include <runner.h>

void draw_all_sprite(t_game *game, t_instance *instance)
{
    draw_sprite_list(game, game->parallax);
    draw_sprite_list(game, game->entities);
    if (instance->is_jump)
        draw_sprite_list(game, game->player_jump);
    else
        draw_sprite_list(game, game->player);
    draw_sprite_list(game, game->life);
    sfRenderWindow_drawText(game->window, game->score, NULL);
}

void draw_sprite_list(t_game *game, t_list *list)
{
    t_game_object *temp = list->start;
    for (int i = 0; i < list->len; i++) {
        sfRenderWindow_drawSprite(game->window, temp->sprite, NULL);
        temp = temp->next;
    }
}