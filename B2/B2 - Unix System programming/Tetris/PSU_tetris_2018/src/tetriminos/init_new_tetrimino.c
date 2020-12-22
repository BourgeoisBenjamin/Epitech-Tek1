/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** init_new_tetriminos
*/

#include "tetris.h"

t_tetriminos *init_new_tetriminos(void)
{
    t_tetriminos *new = malloc(sizeof(t_tetriminos));

    if (new == NULL)
        return (NULL);
    new->name = NULL;
    new->width = 0;
    new->height = 0;
    new->color = 0;
    new->form = NULL;
    new->error = 0;
    return (new);
}
