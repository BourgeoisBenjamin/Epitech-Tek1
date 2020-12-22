/*
** EPITECH PROJECT, 2018
** screensaver
** File description:
** background
*/

#include <my_screensaver.h>

void background(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    srand(time(NULL));

    sfColor color = {0, 0, 0, 50};
    while (sfRenderWindow_isOpen(window)) {
        color.r = rand() % (255 + 1);
        color.g = rand() % (255 + 1);
        color.b = rand() % (255 + 1);
        clear_buffer(fb, color);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}