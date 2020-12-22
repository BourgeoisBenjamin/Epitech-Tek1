/*
** EPITECH PROJECT, 2018
** screensaver
** File description:
** framebuffer_create
*/

#include <my_screensaver.h>

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(sizeof(framebuffer->pixels)
                                * framebuffer->height
                                * framebuffer->width * 4);

    return (framebuffer);
}
