/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** delete_map
*/

#include <matchstick.h>

void delete_map(t_info *game)
{
    if (game->map) {
        for (int i = 0; i < game->rows; i++) {
            if (game->map[i] != NULL)
                free(game->map[i]);
        }
        free(game->map);
    }
}