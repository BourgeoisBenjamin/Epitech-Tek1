/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** Day 13
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <initiation.h>

sfRenderWindow* create_my_window(int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
    "MyWindow",
    sfDefaultStyle,
    NULL);

    return (window);
}

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(sizeof(framebuffer->pixels)
    * framebuffer->height * framebuffer->width * 4);

    return (framebuffer);
}

void my_put_pixel(framebuffer_t *fb, unsigned int x, unsigned int y,
sfColor color)
{
    int i = (800 * y * 4 + x * 4);
    fb->pixels[i] = color.r;
    fb->pixels[i + 1] = color.g;
    fb->pixels[i + 2] = color.b;
    fb->pixels[i + 3] = color.a;
}

void my_draw_square(framebuffer_t *fb, sfVector2u position,
unsigned int size, sfColor color)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (j != size) {
        i = 0;
        while (i != size) {
            my_put_pixel(fb, i + position.x, j + position.y, color);
            i++;
        }
        j++;
    }
}

int main(void)
{
    sfEvent event;
    sfRenderWindow *window;
    framebuffer_t *fb;
    sfTexture *texture;
    sfSprite *sprite;
    sfColor color = {0, 0, 255, 255};
    sfVector2u position = {100, 100};

    window = create_my_window(800, 600);
    fb = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    sprite = sfSprite_create();

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        my_draw_square(fb, position, 10, color);
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
