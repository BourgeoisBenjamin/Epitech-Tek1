/*
** EPITECH PROJECT, 2018
** screensaver
** File description:
** crazy_circle
*/

#include <my_screensaver.h>

void crazy_circle(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    sfVector2i center, center2, center3, center4;
    float a = 0;
    sfColor clear = {0, 0, 0, 50};
    for (;sfRenderWindow_isOpen(window); a += 0.03) {
        clear_buffer(fb, clear);
        center.x = fb->width / 2 - fb->width / 2 * sin(a) * sin(a*2);
        center.y = fb->height / 2 + fb->height / 2 * sin(a) * sin(a*2);
        center2.x = fb->width / 2 - fb->width / 2 * sin(a) * sin(a*2);
        center2.y = fb->height / 2 - fb->height / 2 * sin(a) * sin(a*2);
        center3.x = fb->width / 2 + fb->width / 2 * sin(a) * sin(a*2);
        center3.y = fb->height / 2 - fb->height / 2 * sin(a) * sin(a*2);
        center4.x = fb->width / 2 + fb->width / 2 * sin(a) * sin(a*2);
        center4.y = fb->height / 2 + fb->height / 2 * sin(a) * sin(a*2);
        draw_crazy_circle(fb, center);
        draw_crazy_circle(fb, center2);
        draw_crazy_circle(fb, center3);
        draw_crazy_circle(fb, center4);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}

void draw_crazy_circle(framebuffer_t *framebuffer, sfVector2i center)
{
    srand(time(NULL));
    sfColor color;
    int radius = 50;

    color.r = rand() % (255 + 1);
    color.g = rand() % (255 + 1);
    color.b = rand() % (255 + 1);
    color.a = 255;

    draw_circle(framebuffer, center, radius, color);
}