/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_game
*/

#include "defender.h"

t_game *init(void)
{
    my_printf("[LOADING] Windows Game\n");
    t_game *game = malloc(sizeof(t_game));

    if (game == NULL)
        return NULL;

    game->instance = malloc(sizeof(t_instance));
    game->scenes_array = init_scene_array();

    if (game->instance == NULL || game->scenes_array == NULL) {
        free_all(game);
        return NULL;
    }
    if (init_renderwindow(game) == -1)
        return NULL;
    init_main_music(game);
    init_instance(game->instance);
    return game;
}
