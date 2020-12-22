/*
** EPITECH PROJECT, 2018
** Initation - CSFML
** File description:
** Header for Bootstrap initiation CSFML
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <my.h>
#include <time.h>
#include <math.h>
#define MAX_ID 11

typedef struct framebuffer_s {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

typedef struct s_animation
{
    void (*ptr)();
    int id;
} t_animation;

typedef struct s_cube
{
    float x;
    float y;
    float z;
} t_cube;

/* USAGE */

int bad_arguments(void);
void display_animation_id(void);
int display_usage(char **argv);

/* SCREENSAVER */

int my_screensaver(int id);
void prepare_windows(t_animation *animation_tab, int i);
void update_screen(framebuffer_t *fb, sfTexture *texture,
    sfSprite *sprite, sfRenderWindow *window);
void destroy_texture(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void close_windows(sfRenderWindow *window);

/* ANIMATIONS */

void generate_stars(framebuffer_t *fb);
void star(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void generate_square(framebuffer_t *fb);
void square(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void generate_circle(framebuffer_t *fb);
void circle(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void line(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void crazy_circle(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void draw_crazy_circle(framebuffer_t *framebuffer,
    sfVector2i center);
void background(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void widening_circle(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void rotation_cube(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void generate_cube_rotation(framebuffer_t *fb, t_cube *cube,
    sfVector2i center);
void rotation_cube2(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void generate_cube_rotation2(framebuffer_t *fb, t_cube *cube,
    sfVector2i center);
void rotation_cube3(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void generate_cube_rotation3(framebuffer_t *fb, t_cube *cube,
    sfVector2i center);
void google_logo(sfRenderWindow *window, framebuffer_t *fb,
    sfTexture *texture, sfSprite *sprite);
void google_logo2(framebuffer_t *fb, t_cube *cube,
    sfVector2i center, sfColor color);


/* DISPLAY FONCTION */

void clear_buffer(framebuffer_t *framebuffer, sfColor color);
sfRenderWindow* create_my_window(int width, int height);
int draw_circle(framebuffer_t *framebuffer, sfVector2i center,
                int radius, sfColor color);
int draw_line_low(framebuffer_t *fb, sfVector2i point_a,
                    sfVector2i point_b, sfColor color);
int draw_line_high(framebuffer_t *fb, sfVector2i point_a,
                    sfVector2i point_b, sfColor color);
void draw_line(framebuffer_t *fb, sfVector2i point_a,
    sfVector2i point_b, sfColor color);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void my_put_pixel(framebuffer_t *fb, unsigned int x,
                    unsigned int y, sfColor color);
void create_point_cube(t_cube *cube);