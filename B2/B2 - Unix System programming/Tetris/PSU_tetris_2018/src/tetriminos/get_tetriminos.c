/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** get_tetriminos
*/

#include "tetris.h"

t_tetriminos **get_tetriminos(t_tetriminos **tetriminos_tab)
{
    t_tetriminos *new = NULL;
    struct dirent *dp = NULL;
    DIR *dir_tetriminos = open_dir_tetriminos();

    if (dir_tetriminos == NULL)
        return (delete_tetriminos_array(tetriminos_tab));
    while ((dp = readdir(dir_tetriminos)) != NULL) {
        if (!is_tetrimino_file(dp))
            continue;
        if ((new = parse_file_tetriminos(dp)) == NULL) {
            closedir(dir_tetriminos);
            return (delete_tetriminos_array(tetriminos_tab));
        }
        if ((tetriminos_tab = add_tetriminos(tetriminos_tab, new)) == NULL) {
            closedir(dir_tetriminos);
            return (delete_tetriminos_array(tetriminos_tab));
        }
    }
    closedir(dir_tetriminos);
    return (sort_tetriminos_tab(tetriminos_tab));
}
