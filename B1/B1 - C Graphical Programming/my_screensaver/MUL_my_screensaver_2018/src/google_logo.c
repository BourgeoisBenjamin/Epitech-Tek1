/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** google_logo
*/

#include <my_screensaver.h>

void google_logo(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    sfColor clear = {48, 48, 48, 255};
    sfVector2i center1 = {384, 540};
    sfVector2i center2 = {768, 540};
    sfVector2i center3 = {1152, 540};
    sfVector2i center4 = {1536, 540};
    sfColor color1 = {66, 129, 242, 255};
    sfColor color2 = {216, 73, 52, 255};
    sfColor color3 = {236, 187, 0, 255};
    sfColor color4 = {47, 164, 80, 255};
    t_cube *cube = malloc(sizeof(t_cube) * 8);
    create_point_cube(cube);
    while (sfRenderWindow_isOpen(window)) {
        clear_buffer(fb, clear);
        google_logo2(fb, cube, center1, color1);
        google_logo2(fb, cube, center2, color2);
        google_logo2(fb, cube, center3, color3);
        google_logo2(fb, cube, center4, color4);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
}

void google_logo2(framebuffer_t *fb, t_cube *cube,
    sfVector2i center, sfColor color)
{
    sfVector2i point = {0, 0};
    float a = 0.5;
    float f = 500;
    int radius = 50;
    double angle = (a * M_PI) / 180;

    for (int i = 0; i < 8; i++) {
        cube[i].x = (cos(angle) * cube[i].x) + (sin(angle) * cube[i].z);
        cube[i].z = -(sin(angle) * cube[i].x) + (cos(angle) * cube[i].z);
        point.x = center.x + ((cube[i].x * f) / (cube[i].z + 15));
        point.y = center.y + ((cube[i].y * f) / (cube[i].z + 15));
        draw_circle(fb, point, radius, color);
    }
}