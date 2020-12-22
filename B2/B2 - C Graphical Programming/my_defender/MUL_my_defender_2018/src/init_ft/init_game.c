/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_game
*/

#include "defender.h"

int init_game(t_game *game)
{
    init_main_menu(game);
    if (create_first_map(game) == -1)
        return -1;
    init_pause_menu(game);
    init_htp_menu(game);
    init_score(game);
    init_end(game);
    return 0;
}
