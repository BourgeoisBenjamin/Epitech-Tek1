/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** move_rect
*/

#include <runner.h>

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}
