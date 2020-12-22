/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_player_inv_scene
*/

#include "rpg.h"

t_game_object *init_player_inv_scene(t_game_object *list_obj, t_player *player)
{
    t_game_object *player_inv = malloc(sizeof(t_game_object));
    sfVector2f resize = {6, 6};
    sfVector2f pos = {1050, 630};
    if (player_inv == NULL)
        return (NULL);
    player_inv->texture = sfTexture_copy(player->texture);
    player_inv->sprite = sfSprite_copy(player->sprite);
    player_inv->position = pos;
    player_inv->rect = player->rect;
    player_inv->type = ENTITIES_O;
    player_inv->next = NULL;
    player_inv->cht = NULL;
    sfSprite_setScale(player_inv->sprite, resize);
    sfSprite_setPosition(player_inv->sprite, pos);
    if ((list_obj = add_object(list_obj, player_inv)) == NULL)
        return (NULL);
    return (list_obj);
}
