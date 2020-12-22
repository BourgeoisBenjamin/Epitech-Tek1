/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** matchstick
*/

#include <matchstick.h>

int matchstick(t_info *game)
{
    srandom(time(NULL));
    while (game->return_status == -1) {
        display_map(game);
        my_printf("Your turn:\n");
        if (players_turn(game) == -1)
            return 1;
        if (check_win(game, 2))
            break;
        display_map(game);
        my_printf("AI's turn...\n");
        ias_turn(game);
        if (check_win(game, 1))
            break;
    }
    display_map(game);
    return 0;
}