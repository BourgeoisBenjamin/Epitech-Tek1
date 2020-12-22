/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** rotation3 cube
*/

#include <my_screensaver.h>

void rotation_cube3(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite)
{
    sfColor clear = {0, 0, 0, 55};
    sfVector2i center1 = {560, 540};
    sfVector2i center2 = {960, 540};
    sfVector2i center3 = {1360, 540};
    t_cube *cube = malloc(sizeof(t_cube) * 8);
    create_point_cube(cube);
    while (sfRenderWindow_isOpen(window)) {
        clear_buffer(fb, clear);
        generate_cube_rotation3(fb, cube, center1);
        generate_cube_rotation3(fb, cube, center2);
        generate_cube_rotation3(fb, cube, center3);
        update_screen(fb, texture, sprite, window);
        close_windows(window);
    }
    free(cube);
}

void generate_cube_rotation3(framebuffer_t *fb, t_cube *cube, sfVector2i center)
{
    sfVector2i point = {0, 0};
    sfColor color = {0, 0, 0, 255};
    float a = 0.5;
    float f = 700;
    int radius = 20;
    double angle = (a * M_PI) / 180;

    for (int i = 0; i < 8; i++) {
        cube[i].y = (cos(angle) * cube[i].y) - (sin(angle) * cube[i].z);
        cube[i].z = (sin(angle) * cube[i].y) + (cos(angle) * cube[i].z);
        point.x = center.x + ((cube[i].x * f) / (cube[i].z + 2.5));
        point.y = center.y + ((cube[i].y * f) / (cube[i].z + 2.5));
        color.r = cube[i].x * 100;
        color.g = cube[i].y * 100;
        color.b = cube[i].z * 100;
        draw_circle(fb, point, radius, color);
    }
}