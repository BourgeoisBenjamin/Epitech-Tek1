/*
** EPITECH PROJECT, 2018
** myscreensaver
** File description:
** my_draw_square.c
*/

#include <initiation.h>

void my_draw_square(framebuffer_t *fb, sfVector2u position,
                    unsigned int size, sfColor color)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (j != size) {
        i = 0;
        while (i != size) {
            my_put_pixel(fb, i + position.x, j + position.y, color);
            i++;
        }
        j++;
    }
}
