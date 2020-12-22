/*
** EPITECH PROJECT, 2018
** screensaver
** File description:
** widening_circle
*/

#include <my_screensaver.h>

void widening_circle(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    srand(time(NULL));
    int radius = 0;
    sfColor clear = {0, 0, 0, 50};
    sfColor color = {rand() % (255 + 1), rand() % (255 + 1),
                    rand() % (255 + 1), 255};
    sfVector2i center = {rand() % (fb->width + 1 - (2 * radius)),
                        rand() % (fb->height + 1 - (2 * radius))};
    while (sfRenderWindow_isOpen(window)) {
        clear_buffer(fb, clear);
        if (radius > 100) {
            center.x = rand() % ((fb->width - 2 * radius)- radius) + radius;
            center.y = rand() % ((fb->height - 2 * radius) - radius) + radius;
            radius = 0;
        } else {
            draw_circle(fb, center, radius, color);
            radius++;
        }
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}