/*
** EPITECH PROJECT, 2018
** screensaver
** File description:
** my_put_pixel.c
*/

#include <my_screensaver.h>

void my_put_pixel(framebuffer_t *fb, unsigned int x,
                    unsigned int y, sfColor color)
{
    int i = (fb->width * y * 4 + x * 4);
    fb->pixels[i] = color.r;
    fb->pixels[i + 1] = color.g;
    fb->pixels[i + 2] = color.b;
    fb->pixels[i + 3] = color.a;
}
