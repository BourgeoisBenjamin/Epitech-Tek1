/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** move_rect
*/

#include "defender.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}
