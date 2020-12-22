/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** delete_tetriminos_array
*/

#include "tetris.h"

void *delete_tetriminos_array(t_tetriminos **tetriminos_array)
{
    if (tetriminos_array == NULL)
        return (NULL);
    for (int i = 0; tetriminos_array[i]; i++) {
        delete_tetriminos(tetriminos_array[i]);
    }
    free(tetriminos_array);
    return (NULL);
}
