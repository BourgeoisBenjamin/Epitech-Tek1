/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** check_action_obj
*/

#include "rpg.h"

int check_action_top(t_rpg *game, t_player *player)
{
    sfFloatRect obj_p;
    sfFloatRect player_p;
    t_game_object *tmp = game->scenes_array[game->scene]->objs;
    while (tmp != NULL) {
        player->position.y -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        player_p = sfSprite_getGlobalBounds(player->sprite);
        obj_p = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&player_p, &obj_p, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.y += 10;
            sfSprite_setPosition(player->sprite, player->position);
            if (tmp->callback != NULL)
                return (tmp->callback(game, tmp));
        }
        player->position.y += 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (-1);
}

int check_action_bot(t_rpg *game, t_player *player)
{
    sfFloatRect obj_p;
    sfFloatRect player_p;
    t_game_object *tmp = game->scenes_array[game->scene]->objs;
    while (tmp != NULL) {
        player->position.y += 10;
        sfSprite_setPosition(player->sprite, player->position);
        player_p = sfSprite_getGlobalBounds(player->sprite);
        obj_p = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&player_p, &obj_p, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.y -= 10;
            sfSprite_setPosition(player->sprite, player->position);
            if (tmp->callback != NULL)
                return (tmp->callback(game, tmp));
        }
        player->position.y -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (-1);
}

int check_action_right(t_rpg *game, t_player *player)
{
    sfFloatRect obj_p;
    sfFloatRect player_p;
    t_game_object *tmp = game->scenes_array[game->scene]->objs;
    while (tmp != NULL) {
        player->position.x += 10;
        sfSprite_setPosition(player->sprite, player->position);
        player_p = sfSprite_getGlobalBounds(player->sprite);
        obj_p = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&player_p, &obj_p, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.x -= 10;
            sfSprite_setPosition(player->sprite, player->position);
            if (tmp->callback != NULL)
                return (tmp->callback(game, tmp));
        }
        player->position.x -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (-1);
}

int check_action_left(t_rpg *game, t_player *player)
{
    sfFloatRect obj_p;
    sfFloatRect player_p;
    t_game_object *tmp = game->scenes_array[game->scene]->objs;
    while (tmp != NULL) {
        player->position.x -= 10;
        sfSprite_setPosition(player->sprite, player->position);
        player_p = sfSprite_getGlobalBounds(player->sprite);
        obj_p = sfSprite_getGlobalBounds(tmp->sprite);
        if (sfFloatRect_intersects(&player_p, &obj_p, NULL) == sfTrue &&
        tmp->type == OBJ_O) {
            player->position.x += 10;
            sfSprite_setPosition(player->sprite, player->position);
            if (tmp->callback != NULL)
                return (tmp->callback(game, tmp));
        }
        player->position.x += 10;
        sfSprite_setPosition(player->sprite, player->position);
        tmp = tmp->next;
    }
    return (-1);
}

int check_action_obj(t_rpg *game)
{
    int value = 0;

    if ((value = check_action_top(game, game->player)) != -1)
        return (value);
    if ((value = check_action_bot(game, game->player)) != -1)
        return (value);
    if ((value = check_action_right(game, game->player)) != -1)
        return (value);
    if ((value = check_action_left(game, game->player)) != -1)
        return (value);
    return (-1);
}
