/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** create_player
*/

#include "rpg.h"

t_player *make_player(t_player *player, char *path,
sfIntRect rect, int max_value)
{
    sfVector2f scale = {3.80, 3.80};

    player->texture = sfTexture_createFromFile(path, NULL);
    player->sprite = sfSprite_create();
    sfSprite_setTexture(player->sprite, player->texture, sfTrue);
    sfSprite_setTextureRect(player->sprite, rect);
    sfSprite_setPosition(player->sprite, player->position);
    sfSprite_setScale(player->sprite, scale);
    player->rect = rect;
    player->offset = rect.width;
    player->max_value = max_value;

    return (player);
}

t_player *init_player(void)
{
    t_player *player = malloc(sizeof(t_player));
    if (player == NULL)
        return (NULL);
    player->texture = NULL;
    player->sprite = NULL;
    player->offset = 0;
    player->max_value = 0;
    player->inventory = NULL;
    player->attrib = NULL;
    player->on_fight = NULL;
    return (player);
}
