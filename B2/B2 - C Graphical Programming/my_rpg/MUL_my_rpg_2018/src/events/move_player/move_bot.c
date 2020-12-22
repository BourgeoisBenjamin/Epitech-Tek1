/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** move_bot
*/

#include "rpg.h"

void loop_move_bot_background(t_scenes *scene, t_rpg *game)
{
    t_game_object *tmp_obj = scene->objs;
    t_npc *tmp_npc = scene->npc;
    while (tmp_obj != NULL) {
        if (tmp_obj->type == BACKGROUND_O &&
        sfClock_getElapsedTime(game->player->clock).microseconds > MOV) {
            tmp_obj->rect.top += 10;
            sfSprite_setTextureRect(tmp_obj->sprite, tmp_obj->rect);
        } else if (sfClock_getElapsedTime(game->player->clock).microseconds >
        MOV) {
            tmp_obj->position.y -= 10;
            sfSprite_setPosition(tmp_obj->sprite, tmp_obj->position);
        }
        tmp_obj = tmp_obj->next;
    }
    while (tmp_npc != NULL &&
    sfClock_getElapsedTime(game->player->clock).microseconds > MOV) {
        tmp_npc->position.y -= 10;
        tmp_npc->position_init.y -= 10;
        tmp_npc = tmp_npc->next;
    }
}

void loop_move_player_bot(t_rpg *game)
{
    if (game->player->position.y > 1080 - 300 &&
    limit_map_bot(game, 1080) == false) {
        loop_move_bot_background(game->scenes_array[game->scene], game);
    } else if (game->player->position.y + 10 <= 1080 - 110 &&
        sfClock_getElapsedTime(game->player->clock).microseconds > MOV)
        game->player->position.y += 10;
    if (sfClock_getElapsedTime(game->player->clock).microseconds > RECT) {
        move_rect(game->player->sprite, &game->player->rect,
        game->player->offset, game->player->max_value);
        sfClock_restart(game->player->clock);
    }
}

void move_bot(t_rpg *game)
{
    game->player->clock = sfClock_create();
    while (sfKeyboard_isKeyPressed(sfKeyS) == true) {
        if (is_obj(BOT, game->player, game->scenes_array[game->scene])
            == false)
            loop_move_player_bot(game);
        draw_scene(game->player, game->window, game->scenes_array, game->scene);
    }
    sfClock_destroy(game->player->clock);
    game->player->rect.left = 0;
    sfSprite_setTextureRect(game->player->sprite, game->player->rect);
}
