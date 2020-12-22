/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_game
*/

#include "tetris.h"

void refresh_game(t_tetris *info)
{
    wrefresh(info->window->board_game);
    if (info->settings->hide_next == 0)
        wrefresh(info->window->tetriminos);
    wrefresh(info->window->stats);
    refresh();
}

void clear_game(t_tetris *info)
{
    if (info->settings->hide_next == 0)
        wclear(info->window->tetriminos);
    wclear(info->window->board_game);
    wclear(info->window->stats);
    clear();
}

void display_game(t_tetris *info)
{
    if (info->settings->hide_next == 0) {
        wborder(info->window->tetriminos, '|', '|', '-', '-', '/', '\\', '\\',
        '/');
        display_next_tetriminos(info);
    }
    wborder(info->window->board_game, '|', '|', '-', '-', '+', '+', '+', '+');
    wborder(info->window->stats, '|', '|', '-', '-', '/', '\\', '\\', '/');
    display_stats(info);
    display_board_game(info);
    refresh_game(info);
    clear_game(info);
}
