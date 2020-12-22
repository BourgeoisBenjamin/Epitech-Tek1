/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** square
*/

#include <my_screensaver.h>

void generate_square(framebuffer_t *fb)
{
    srand(time(NULL));
    sfColor color;
    color.r = rand() % (255 + 1);
    color.g = rand() % (255 + 1);
    color.b = rand() % (255 + 1);
    color.a = 255;
    unsigned size = rand() % (50);
    int x = rand() % (fb->width + 1 - size);
    int y = rand() % (fb->height + 1 - size);
    unsigned int i = 0;
    unsigned int j = 0;

    while (j != size) {
        i = 0;
        while (i != size) {
            my_put_pixel(fb, i + x, j + y, color);
            i++;
        }
        j++;
    }
}

void square(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        generate_square(fb);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}