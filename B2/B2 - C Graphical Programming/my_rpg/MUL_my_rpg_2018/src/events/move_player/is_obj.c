/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** is_obj
*/

#include "rpg.h"

bool is_obj_right(t_player *player, t_scenes *scenes)
{
    t_game_object *tmp = scenes->objs;
    sfFloatRect rect_player;
    sfFloatRect rect_obj;

    while (tmp != NULL) {
        player->position.x += 10;
        sfSprite_setPosition(player->sprite, player->position);
        rect_player = sfSprite_getGlobalBounds(player->sprite);
        rect_obj = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&rect_player, &rect_obj, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.x -= 10;
            sfSprite_setPosition(player->sprite, player->position);
            return (true);
        }
        player->position.x -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (false);
}

bool is_obj_left(t_player *player, t_scenes *scenes)
{
    t_game_object *tmp = scenes->objs;
    sfFloatRect rect_player;
    sfFloatRect rect_obj;

    while (tmp != NULL) {
        player->position.x -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        rect_player = sfSprite_getGlobalBounds(player->sprite);
        rect_obj = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&rect_player, &rect_obj, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.x += 10;
            sfSprite_setPosition(player->sprite, player->position);
            return (true);
        }
        player->position.x += 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (false);
}

bool is_obj_bot(t_player *player, t_scenes *scenes)
{
    t_game_object *tmp = scenes->objs;
    sfFloatRect rect_player;
    sfFloatRect rect_obj;

    while (tmp != NULL) {
        player->position.y += 10;
        sfSprite_setPosition(player->sprite, player->position);
        rect_player = sfSprite_getGlobalBounds(player->sprite);
        rect_obj = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&rect_player, &rect_obj, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.y -= 10;
            sfSprite_setPosition(player->sprite, player->position);
            return (true);
        }
        player->position.y -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (false);
}

bool is_obj_top(t_player *player, t_scenes *scenes)
{
    t_game_object *tmp = scenes->objs;
    sfFloatRect rect_player;
    sfFloatRect rect_obj;

    while (tmp != NULL) {
        player->position.y -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        rect_player = sfSprite_getGlobalBounds(player->sprite);
        rect_obj = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&rect_player, &rect_obj, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.y += 10;
            sfSprite_setPosition(player->sprite, player->position);
            return (true);
        }
        player->position.y += 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (false);
}

bool is_obj(enum move pos, t_player *player, t_scenes *scenes)
{
    bool (*fonction[5])(t_player *player, t_scenes *scenes) = { &is_obj_top,
        &is_obj_bot, &is_obj_left, &is_obj_right, NULL};

    return (fonction[pos](player, scenes));
}
