/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** add_transparency
*/

#include "rpg.h"

void add_transparency_text(t_text *text, int to_add)
{
    sfColor color = sfText_getColor(text->text);
    if (color.a + to_add <= 255)
        color.a += to_add;
    sfText_setColor(text->text, color);
}

void add_transparency_objs(t_game_object *obj, int to_add)
{
    sfColor color = sfSprite_getColor(obj->sprite);
    if (color.a + to_add <= 255)
        color.a += to_add;
    sfSprite_setColor(obj->sprite, color);
}
