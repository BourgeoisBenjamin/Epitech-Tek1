/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** onhover
*/

#include "rpg.h"

void onhover(struct s_button *button)
{
    button->rect.left = 0 + button->offset;
    sfRectangleShape_setTextureRect(button->shape, button->rect);
}
