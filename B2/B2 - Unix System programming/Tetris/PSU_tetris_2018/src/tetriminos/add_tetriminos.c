/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** add_tetriminos_index
*/

#include "tetris.h"

int get_nb_tetriminos(t_tetriminos **tetriminos_array)
{
    int nb_tetriminos = 0;
    if (tetriminos_array == NULL)
        return (nb_tetriminos);
    while (tetriminos_array[nb_tetriminos] != NULL)
        nb_tetriminos++;
    return (nb_tetriminos);
}

t_tetriminos **add_tetriminos(t_tetriminos **index,
t_tetriminos *new_tetriminos)
{
    int nb_tetri = get_nb_tetriminos(index);
    t_tetriminos **new_index = malloc(sizeof(t_tetriminos*) * (nb_tetri + 2));
    if (new_index == NULL) {
        delete_tetriminos_array(index);
        return (NULL);
    }
    for (int i = 0; index && index[i]; i++) {
        new_index[i] = index[i];
    }
    new_index[nb_tetri] = new_tetriminos;
    new_index[nb_tetri + 1] = NULL;
    free(index);
    return (new_index);
}
