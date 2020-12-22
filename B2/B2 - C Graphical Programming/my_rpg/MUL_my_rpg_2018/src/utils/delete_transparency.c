/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_transparency
*/

#include "rpg.h"

void delete_transparency_text(t_text *text, int to_delete)
{
    sfColor color = sfText_getColor(text->text);
    if (color.a - to_delete >= 0)
        color.a -= to_delete;
    sfText_setColor(text->text, color);
}

void delete_transparency_objs(t_game_object *obj, int to_delete)
{
    sfColor color = sfSprite_getColor(obj->sprite);
    if (color.a - to_delete >= 0)
        color.a -= to_delete;
    sfSprite_setColor(obj->sprite, color);
}
