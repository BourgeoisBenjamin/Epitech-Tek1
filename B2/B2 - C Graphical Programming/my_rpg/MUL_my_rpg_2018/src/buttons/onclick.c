/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** onclick
*/

#include "rpg.h"

void onclick(struct s_button *button)
{
    button->rect.left = 0 + 2 * button->offset;
    sfRectangleShape_setTextureRect(button->shape, button->rect);
}
