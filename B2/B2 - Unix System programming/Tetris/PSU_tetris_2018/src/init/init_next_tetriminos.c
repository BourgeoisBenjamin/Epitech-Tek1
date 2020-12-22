/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** init_next_tetriminos
*/

#include "tetris.h"

t_tetriminos *random_tetriminos(t_tetriminos **tetriminos)
{
    int size = 0;
    int nb_rand;

    while (tetriminos[size] != NULL)
        size++;
    nb_rand = rand() % (size - 0);
    if (tetriminos[nb_rand]->error == 1)
        return (random_tetriminos(tetriminos));
    return (tetriminos[nb_rand]);
}

t_tetriminos *init_next_tetriminos(t_tetris *info)
{
    t_tetriminos *next = random_tetriminos(info->tetriminos);

    if (info->settings->hide_next == 0) {
        info->window->tetriminos = subwin(stdscr, next->height + 2,
        next->width * 2 + 3, (LINES / 2) - ((info->settings->row + 2) / 2)
        + 2, (COLS / 2) - ((info->settings->col * 2 + 3) / 2) +
        info->settings->col * 3);
        wborder(info->window->tetriminos, '|', '|', '-', '-', '/', '\\',
        '\\', '/');
    }
    return next;
}
