/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** init_game
*/

#include "tetris.h"

void init_color_ncurses(void)
{
    init_pair(1, 1, COLOR_BLACK);
    init_pair(2, 2, COLOR_BLACK);
    init_pair(3, 3, COLOR_BLACK);
    init_pair(4, 4, COLOR_BLACK);
    init_pair(5, 5, COLOR_BLACK);
    init_pair(6, 6, COLOR_BLACK);
    init_pair(7, 7, COLOR_BLACK);
}

int init_game(t_tetris *info)
{
    initscr();
    start_color();
    curs_set(0);
    init_color_ncurses();
    set_input_term(2);
    srand(time(NULL));
    init_border_board_game(info->window,
    info->settings->row,
    info->settings->col);
    init_border_stats(info->window);
    if ((info->game = init_array_game(info->settings)) == NULL)
        return (-1);
    if ((info->decor = init_array_game(info->settings)) == NULL)
        return (-1);
    info->current = random_tetriminos(info->tetriminos);
    info->score = 0;
    return (0);
}
