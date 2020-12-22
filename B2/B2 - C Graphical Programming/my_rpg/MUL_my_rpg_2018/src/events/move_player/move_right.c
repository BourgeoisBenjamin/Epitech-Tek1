/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** move_right
*/

#include "rpg.h"

void loop_move_right_background(t_scenes *scene, t_rpg *game)
{
    t_game_object *tmp_obj = scene->objs;
    t_npc *tmp_npc = scene->npc;
    while (tmp_obj != NULL) {
        if (tmp_obj->type == BACKGROUND_O &&
        sfClock_getElapsedTime(game->player->clock).microseconds > MOV) {
            tmp_obj->rect.left += 10;
            sfSprite_setTextureRect(tmp_obj->sprite, tmp_obj->rect);
        } else if (sfClock_getElapsedTime(game->player->clock).microseconds >
        MOV) {
            tmp_obj->position.x -= 10;
            sfSprite_setPosition(tmp_obj->sprite, tmp_obj->position);
        }
        tmp_obj = tmp_obj->next;
    }
    while (tmp_npc != NULL &&
    sfClock_getElapsedTime(game->player->clock).microseconds > MOV) {
        tmp_npc->position.x -= 10;
        tmp_npc->position_init.x -= 10;
        tmp_npc = tmp_npc->next;
    }
}

void loop_move_player_right(t_rpg *game)
{
    if (game->player->position.x > 1920 - 200 &&
    limit_map_right(game, 1920) == false) {
        loop_move_right_background(game->scenes_array[game->scene], game);
    } else if (game->player->position.x + 10 <= 1920 - game->player->offset
        && sfClock_getElapsedTime(game->player->clock).microseconds > MOV)
        game->player->position.x += 10;
    if (sfClock_getElapsedTime(game->player->clock).microseconds > RECT) {
        move_rect(game->player->sprite, &game->player->rect,
        game->player->offset, game->player->max_value);
        sfClock_restart(game->player->clock);
    }
}

void move_right(t_rpg *game)
{
    game->player->rect.top = 0;
    game->player->clock = sfClock_create();
    while (sfKeyboard_isKeyPressed(sfKeyD) == true) {
        if (is_obj(RIGHT, game->player, game->scenes_array[game->scene])
            == false)
            loop_move_player_right(game);
        draw_scene(game->player, game->window, game->scenes_array, game->scene);
    }
    sfClock_destroy(game->player->clock);
    game->player->rect.left = 0;
    sfSprite_setTextureRect(game->player->sprite, game->player->rect);
}
