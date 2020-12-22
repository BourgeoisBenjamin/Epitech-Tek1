/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** screensaver sort animation
*/

#include <my_screensaver.h>

int my_screensaver(int id)
{
    t_animation animation_tab[] =
    {
        {&star, 1},
        {&square, 2},
        {&circle, 3},
        {&line, 4},
        {&crazy_circle, 5},
        {&background, 6},
        {&widening_circle, 7},
        {&rotation_cube, 8},
        {&rotation_cube2, 9},
        {&rotation_cube3, 10},
        {&google_logo, 11},
        {NULL, 0}
    };
    int i = 0;

    while (animation_tab[i].id != 0) {
        if (animation_tab[i].id == id) {
            prepare_windows(animation_tab, id);
        }
        i++;
    }
    return 0;
}

void prepare_windows(t_animation *animation_tab, int i)
{
    sfRenderWindow *window = create_my_window(1920, 1080);
    framebuffer_t *fb = framebuffer_create(1920, 1080);
    sfTexture *texture = sfTexture_create(1920, 1080);
    sfSprite *sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(window, 60);

    animation_tab[i - 1].ptr(window, fb, texture, sprite);

    destroy_texture(window, fb, texture, sprite);
}

void update_screen(framebuffer_t *fb, sfTexture *texture,
    sfSprite *sprite, sfRenderWindow *window)
{
    sfTexture_updateFromPixels(texture, fb->pixels, fb->width,
                                fb->height, 0, 0);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void destroy_texture(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    free(fb);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

void close_windows(sfRenderWindow *window)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
}