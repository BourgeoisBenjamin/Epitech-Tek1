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
                                 * framebuffer->height
                                 * framebuffer->width * 4);

    return (framebuffer);
}

void my_put_pixel(framebuffer_t *fb, unsigned int x, unsigned int y, sfColor color)
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
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;

    rect.top = 0;
    rect.left = 0;
    rect.height = 110;
    rect.width = 110;

    window = create_my_window(1920, 1080);
    texture = sfTexture_createFromFile("sprite.png", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    clock = sfClock_create();

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfSprite_setTextureRect(sprite, rect);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);

        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 100000.0;
        if (seconds > 1) {
            move_rect(&rect, 110, 330);
            sfClock_restart(clock);
        }
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

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}
