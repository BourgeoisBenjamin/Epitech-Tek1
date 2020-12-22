/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** remove_matches
*/

#include <matchstick.h>

void remove_matches(t_info *game)
{
    int j = 0;
    for (int i = game->cols - 3; game->map[game->line][i]
        && j < game->matches; i--) {
        if (game->map[game->line][i] == '|') {
            game->map[game->line][i] = ' ';
            j++;
        }
    }
    game->nb_matches -= game->matches;
}