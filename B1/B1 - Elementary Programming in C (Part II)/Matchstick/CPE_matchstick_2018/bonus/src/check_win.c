/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** check_win
*/

#include <matchstick.h>

int check_win(t_info *game, int i)
{
    if (game->nb_matches < 1) {
        game->return_status = i;
        return 1;
    }
    return 0;
}