/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_all
*/

#include "rpg.h"

void delete_all(t_rpg *game)
{
    if (game == NULL)
        return;
    delete_scenes_array(game->scenes_array);
    delete_player(game->player);
    if (game->settings)
        free(game->settings);
    if (game->window)
        sfRenderWindow_destroy(game->window);
    free(game);
}
