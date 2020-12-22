/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** move_rect
*/

#include "rpg.h"

void move_rect(sfSprite *sprite, sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
    sfSprite_setTextureRect(sprite, *rect);
}
