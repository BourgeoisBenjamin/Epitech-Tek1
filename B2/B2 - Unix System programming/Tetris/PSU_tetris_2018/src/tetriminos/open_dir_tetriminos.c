/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** open_dir_tetriminos
*/

#include "tetris.h"

DIR *open_dir_tetriminos(void)
{
    DIR *dir_tetriminos = opendir("tetriminos");

    if (dir_tetriminos == NULL) {
        perror("opendir");
        return (NULL);
    }
    return (dir_tetriminos);
}
