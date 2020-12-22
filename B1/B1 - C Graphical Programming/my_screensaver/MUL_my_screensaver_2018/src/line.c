/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** draw_line.c
*/

#include <my_screensaver.h>

void line(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        srand(time(NULL));
        sfColor color;
        sfVector2i point_a;
        sfVector2i point_b;
        color.r = rand() % (255 + 1);
        color.g = rand() % (255 + 1);
        color.b = rand() % (255 + 1);
        color.a = 255;
        point_a.x = rand()%(fb->width);
        point_a.y = rand()%(fb->height);
        point_b.x = rand()%(fb->width);
        point_b.y = rand()%(fb->height);
        draw_line(fb, point_a, point_b, color);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}