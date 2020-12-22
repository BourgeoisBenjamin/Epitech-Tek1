/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_board_game
*/

#include "tetris.h"

void condition_display_board_game(t_tetris *info, int i, int j, int x)
{
    int y = 1;

    if (info->game[i][j] != ' ') {
        wattron(info->window->board_game, COLOR_PAIR(info->game[i][j] - 65));
        mvwprintw(info->window->board_game, y + i, x + j, "*");
        wattroff(info->window->board_game, COLOR_PAIR(info->game[i][j] - 65));
    } else {
        mvwprintw(info->window->board_game, y + i, x + j, "%c",
        info->game[i][j]);
    }
}

void display_board_game(t_tetris *info)
{
    int y = 1;
    int x = 1;

    for (int i = 0; i < info->settings->row; i++) {
        for (int j = 1; j <= info->settings->col; j++) {
            mvwprintw(info->window->board_game, y + i, x + j, " ");
            condition_display_board_game(info, i, j, x);
            x++;
        }
        x = 1;
    }
}
