/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** Day 13
*/

#include <initiation.h>

int main(void)
{
    sfEvent event;
    sfRenderWindow *window;
    framebuffer_t *fb;
    sfTexture *texture;
    sfSprite *sprite;
    sfColor color = {255, 0, 0, 255};
    sfVector2u position = {100, 100};
    sfVector2i point_a;
    sfVector2i point_b;
    sfVector2i center;
    int radius = 10;

    center.x = 200;
    center.y = 200;
    point_a.x = 20;
    point_a.y = 400;
    point_b.x = 200;
    point_b.y = 20;
    
    window = create_my_window(800, 600);
    fb = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    sprite = sfSprite_create();

    
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        //texture = sfTexture_createFromFile("/home/bourgeois/Pictures/epitech-white.png", NULL);
        while (center.x < (fb->width - radius)) {
            draw_circle(fb, center, radius, color);
            center.x++;
        }
        while (center.x > (fb->width - radius)) {
            draw_circle(fb, center, radius, color);
            center.x--;
        }
        sfTexture_updateFromPixels(texture, fb->pixels, 800, 600, 0, 0);
        sfSprite_setTexture(sprite, texture, sfFalse);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    return 0;
}
