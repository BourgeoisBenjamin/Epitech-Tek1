/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** onnormal
*/

#include "rpg.h"

void onnormal(struct s_button *button)
{
    button->rect.left = 0;
    sfRectangleShape_setTextureRect(button->shape, button->rect);
}
