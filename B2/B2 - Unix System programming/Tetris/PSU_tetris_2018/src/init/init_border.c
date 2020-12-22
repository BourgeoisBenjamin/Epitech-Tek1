/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** init_game_env
*/

#include "tetris.h"

void init_border_stats(t_window *window)
{
    window->stats = subwin(stdscr, 6, 24, 1, 1);
    wborder(window->stats, '|', '|', '-', '-', '/', '\\', '\\', '/');
}

void init_border_board_game(t_window *window, int rows, int cols)
{
    window->board_game = subwin(stdscr, rows + 2, cols * 2 + 3,
    (LINES / 2) - ((rows + 2) / 2), (COLS / 2) - ((cols * 2 + 3) / 2));
    wborder(window->board_game, '|', '|', '-', '-', '+', '+', '+', '+');
}
