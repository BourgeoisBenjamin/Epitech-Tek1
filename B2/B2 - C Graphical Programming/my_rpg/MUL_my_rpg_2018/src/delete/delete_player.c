/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_player
*/

#include "rpg.h"

void delete_player(t_player *player)
{
    if (player == NULL)
        return;
    if (player->texture)
        sfTexture_destroy(player->texture);
    if (player->sprite)
        sfSprite_destroy(player->sprite);
    if (player->inventory)
        delete_list_objs(player->inventory);
    if (player->attrib)
        free(player->attrib);
    free(player);
}
