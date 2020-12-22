/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** restart_game
*/

#include "rpg.h"

int restart_game(t_rpg *game)
{
    if (loading_screen(game->window) == -1)
        return (-1);
    delete_scenes_array(game->scenes_array);
    delete_player(game->player);
    if (game->settings)
        free(game->settings);
    game->scenes_array = NULL;
    game->player = init_player();
    if (game->player == NULL) {
        delete_all(game);
        return (-1);
    }
    game->settings = NULL;
    game->scene = START;
    game->actual_game = GAME1;
    if (init_game(game) == -1) {
        delete_all(game);
        return (-1);
    }
    return (0);
}
