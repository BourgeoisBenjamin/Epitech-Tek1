/*
** EPITECH PROJECT, 2018
** Initation - CSFML
** File description:
** Header for Bootstrap initiation CSFML
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <math.h>

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

sfRenderWindow* create_my_window(int width, int height);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void my_put_pixel(framebuffer_t *fb, unsigned int x, unsigned int y, sfColor color);
void my_draw_square(framebuffer_t *fb, sfVector2u position,
                    unsigned int size, sfColor color);
void draw_line(framebuffer_t *fb, sfVector2i point_a, sfVector2i point_b, sfColor color);
int plotLineLow(framebuffer_t *fb, sfVector2i point_a, sfVector2i point_b, sfColor color);
int plotLineHigh(framebuffer_t *fb, sfVector2i point_a, sfVector2i point_b, sfColor color);