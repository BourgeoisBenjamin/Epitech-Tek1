/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** sort_tetriminos_tab
*/

#include "tetris.h"

int sort_alpha(t_tetriminos **tab_tetri, int i)
{
    t_tetriminos *tmp = NULL;
    if (my_strcmp(tab_tetri[i]->name, tab_tetri[i + 1]->name) == 1) {
        tmp = tab_tetri[i];
        tab_tetri[i] = tab_tetri[i + 1];
        tab_tetri[i + 1] = tmp;
        return (1);
    }
    return (0);
}

t_tetriminos **sort_tetriminos_tab(t_tetriminos **tab_tetri)
{
    int sort = 1;

    if (tab_tetri == NULL)
        return (NULL);
    while (sort != 0) {
        sort = 0;
        for (int i = 0; tab_tetri[i + 1]; i++)
            sort += sort_alpha(tab_tetri, i);
    }
    return (tab_tetri);
}
