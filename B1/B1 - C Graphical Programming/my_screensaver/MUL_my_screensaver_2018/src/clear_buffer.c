/*
** EPITECH PROJECT, 2018
** screensaver
** File description:
** clear buffer
*/

#include <my_screensaver.h>

void clear_buffer(framebuffer_t *framebuffer, sfColor color)
{
    unsigned int i = 0;
    unsigned int j = 0;

    for (i = 0; i < framebuffer->width; i++) {
        for (j = 0; j < framebuffer->height; j++) {
            my_put_pixel(framebuffer, i, j, color);
        }
    }
}