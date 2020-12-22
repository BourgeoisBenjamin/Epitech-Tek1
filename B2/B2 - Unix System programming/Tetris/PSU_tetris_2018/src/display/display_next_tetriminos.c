/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_next_tetriminos;
*/

#include "tetris.h"

void condition_display_next_tetriminos(t_tetris *info, int i, int j, int x)
{
    int y = 1;

    if (info->next->form[i][j] == '*') {
        wattron(info->window->tetriminos, COLOR_PAIR(info->next->color));
        mvwprintw(info->window->tetriminos, y + i, x + j, "*");
        wattroff(info->window->tetriminos, COLOR_PAIR(info->next->color));
    } else {
        mvwprintw(info->window->tetriminos, y + i, x + j, " ");
    }
}

void display_next_tetriminos(t_tetris *info)
{
    int x = 2;
    int y = 1;

    mvprintw((LINES / 2) - ((info->settings->row + 2) / 2) + 2,
    (COLS / 2) - ((info->settings->col * 2 + 3) / 2) +
    info->settings->col * 3, "Next");
    for (int i = 0; i < info->next->height; i++) {
        for (int j = 0; j < info->next->width; j++) {
            mvwprintw(info->window->tetriminos, y + i, x + j, " ");
            condition_display_next_tetriminos(info, i, j, x);
            x++;
        }
        x = 2;
    }
}
