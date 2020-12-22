/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_button_position
*/

#include "rpg.h"

t_button *create_button_position(t_button *new_button, sfVector2f position,
sfVector2f size, sfIntRect rect)
{
    new_button->pos = position;
    new_button->rect = rect;
    new_button->offset = rect.width;
    new_button->max_value = rect.width * 3;
    new_button->shape = sfRectangleShape_create();
    sfRectangleShape_setPosition(new_button->shape, position);
    sfRectangleShape_setSize(new_button->shape, size);
    sfRectangleShape_setTexture(new_button->shape,
    new_button->texture, sfFalse);
    sfRectangleShape_setTextureRect(new_button->shape, new_button->rect);
    return (new_button);
}
