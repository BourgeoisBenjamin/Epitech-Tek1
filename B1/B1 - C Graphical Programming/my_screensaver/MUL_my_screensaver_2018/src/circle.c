/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** circle
*/

#include <my_screensaver.h>

void generate_circle(framebuffer_t *fb)
{
    srand(time(NULL));
    sfColor color;
    sfVector2i center;

    color.r = rand() % (255 + 1);
    color.g = rand() % (255 + 1);
    color.b = rand() % (255 + 1);
    color.a = 255;
    int radius = rand() % (20);
    center.x = rand() % (fb->width + 1 - (2 * radius));
    center.y = rand() % (fb->height + 1 - (2 * radius));

    draw_circle(fb, center, radius, color);
}

void circle(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        generate_circle(fb);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}