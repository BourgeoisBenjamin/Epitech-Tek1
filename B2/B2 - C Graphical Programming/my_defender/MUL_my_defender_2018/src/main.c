/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** main
*/

#include "defender.h"

int main(void)
{
    t_game *game = init();
    if (init_game(game) == -1) {
        free_all(game);
        return 84;
    }
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            event(game);
        }
        game_main(game);
        draw_scene(game->window, game->scenes_array, game->instance->scene);
    }
    free_all(game);
    return 0;
}
