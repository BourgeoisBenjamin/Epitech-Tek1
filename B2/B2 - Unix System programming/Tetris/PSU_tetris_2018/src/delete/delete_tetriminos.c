/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** delete_tetriminos
*/

#include "tetris.h"

void *delete_tetriminos(t_tetriminos *tetriminos)
{
    if (tetriminos == NULL)
        return (NULL);
    if (tetriminos->name)
        free(tetriminos->name);
    if (tetriminos->form)
        tetriminos->form = free_array(tetriminos->form);
    free(tetriminos);
    return (NULL);
}
