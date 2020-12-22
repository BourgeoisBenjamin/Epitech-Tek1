/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** is_tetrimino_file
*/

#include "tetris.h"

int is_tetrimino_file(struct dirent *dp)
{
    char **info_tab = my_str_to_word_array(dp->d_name, '.');
    if (info_tab == NULL)
        return (0);
    if (get_size_array(info_tab) != 2) {
        free_array(info_tab);
        return (0);
    }
    if (my_strcmp(info_tab[1], "tetrimino") == 0
    && my_strlen(info_tab[1]) == my_strlen("tetrimino")) {
        free_array(info_tab);
        return (1);
    }
    free_array(info_tab);
    return (0);
}
