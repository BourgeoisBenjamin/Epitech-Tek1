/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** free_all
*/

#include "defender.h"

void free_all(t_game *game)
{
    sfRenderWindow_destroy(game->window);
    if (game->instance->score)
        free(game->instance->score);
    free(game->instance);
    free_scenes(game->scenes_array);
    delete_list_musics(game->musics);
    free(game);
}
