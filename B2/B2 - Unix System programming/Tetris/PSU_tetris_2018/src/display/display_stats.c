/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_stats
*/

#include "tetris.h"

void display_stats(t_tetris *info)
{
    mvwprintw(info->window->stats, 1, 1, " LEVEL -> %i",
    info->settings->level);
    wattron(info->window->stats, COLOR_PAIR(5) | A_BOLD);
    mvwprintw(info->window->stats, 3, 1, " Score : %i", info->score);
    wattroff(info->window->stats, COLOR_PAIR(5) | A_BOLD);
    mvwprintw(info->window->stats, 4, 1, " Next level : %i",
    BASE * info->settings->level);
}
