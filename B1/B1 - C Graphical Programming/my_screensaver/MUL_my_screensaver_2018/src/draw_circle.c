/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** circle
*/

#include <my_screensaver.h>

int draw_circle(framebuffer_t *framebuffer, sfVector2i center,
                int radius, sfColor color)
{
    for (int j = center.y - radius; j <= center.y + radius; j++) {
        for (int i = center.x - radius; i <= center.x + radius; i++) {
            if (pow(i - center.x, 2) + pow(j - center.y, 2) <= pow(radius, 2))
                my_put_pixel(framebuffer, i, j, color);
        }
    }
    return 0;
}