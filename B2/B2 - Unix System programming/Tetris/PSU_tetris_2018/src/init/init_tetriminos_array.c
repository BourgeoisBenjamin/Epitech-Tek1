/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** init_tetriminos_array
*/

#include "tetris.h"

t_tetriminos **init_tetriminos_array(void)
{
    t_tetriminos **tetriminos_array = malloc(sizeof(t_tetriminos*));
    if (tetriminos_array == NULL)
        return (NULL);
    tetriminos_array[0] = NULL;
    return (tetriminos_array);
}
