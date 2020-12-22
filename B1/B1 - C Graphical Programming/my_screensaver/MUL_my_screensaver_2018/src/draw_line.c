/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** draw_line.c
*/

#include <my_screensaver.h>

int draw_line_low(framebuffer_t *fb, sfVector2i point_a,
                    sfVector2i point_b, sfColor color)
{
    int dx = point_b.x - point_a.x;
    int dy = point_b.y - point_a.y;
    int yi = 1;

    if (dy < 0) {
        yi = -1;
        dy = -dy;
    }
    int D = 2 * dy - dx;
    int y = point_a.y;

    for (int x = point_a.x; x < point_b.x; x++) {
        my_put_pixel(fb, x, y, color);
        if (D > 0) {
            y = y + yi;
            D = D - 2 * dx;
        }
        D = D + 2 * dy;
    }
    return 0;
}

int draw_line_high(framebuffer_t *fb, sfVector2i point_a,
                    sfVector2i point_b, sfColor color)
{
    int dx = point_b.x - point_a.x;
    int dy = point_b.y - point_a.y;
    int xi = 1;

    if (dx < 0) {
        xi = -1;
        dx = -dx;
    }
    int D = 2 * dx - dy;
    int x = point_a.x;

    for (int y = point_a.y; y < point_b.y; y++) {
        my_put_pixel(fb, x, y, color);
        if (D > 0) {
            x = x + xi;
            D = D - 2 * dy;
        }
        D = D + 2 * dx;
    }
    return 0;
}

void draw_line(framebuffer_t *fb, sfVector2i point_a,
    sfVector2i point_b, sfColor color)
{
    if (fabs(point_b.y - point_a.y) < fabs(point_b.x - point_a.x))
        if (point_a.x > point_b.x)
            draw_line_low(fb, point_b, point_a, color);
        else
            draw_line_low(fb, point_a, point_b, color);
    else
        if (point_a.y > point_b.y)
            draw_line_high(fb, point_b, point_a, color);
        else
            draw_line_high(fb, point_a, point_b, color);
}