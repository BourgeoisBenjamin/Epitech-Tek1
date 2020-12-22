/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** stars animation
*/

#include <my_screensaver.h>

void generate_stars(framebuffer_t *fb)
{
    srand(time(NULL));
    sfColor color;
    color.r = rand() % (255 + 1);
    color.g = rand() % (255 + 1);
    color.b = rand() % (255 + 1);
    color.a = 255;
    int x = rand() % (fb->width);
    int y = rand() % (fb->height);

    my_put_pixel(fb, x, y, color);
}

void star(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        generate_stars(fb);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}