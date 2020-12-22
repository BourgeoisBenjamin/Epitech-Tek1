/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_parallax
*/

#include <runner.h>

void init_parallax(t_game *game)
{
    my_printf("[LOADING] Parallax\n");
    char *parallax[] = {
    "sprite/background/layer_05.png", \
    "sprite/background/layer_05.png", \
    "sprite/background/layer_02.png", \
    "sprite/background/layer_02.png", \
    "sprite/background/layer_04.png", \
    "sprite/background/layer_04.png", \
    "sprite/background/layer_03.png", \
    "sprite/background/layer_03.png"};
    sfVector2f position[] = {{0, 0}, {WIDTH, 0}, {0, 0}, {WIDTH, 0},
    {0, 0}, {WIDTH, 0}, {0, 0}, {WIDTH, 0}};
    sfIntRect rect = {0, 0, WIDTH, HEIGHT};
    int vitesse[] = {1, 1, 2, 2, 3, 3, 6, 6};
    for (int i = 0; i < 8; i++) {
        t_game_object *temp = create_object(parallax[i], position[i],
            rect);
        temp->vitesse = vitesse[i];
        add_sprite(game->parallax, temp);
    }
}