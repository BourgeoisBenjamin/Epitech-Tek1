/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** get_name_tetrimino
*/

#include "tetris.h"

char *get_name_tetrimino(struct dirent *dp)
{
    char **info_tab = my_str_to_word_array(dp->d_name, '.');
    char *name = NULL;
    if (info_tab == NULL)
        return (NULL);
    name = my_strdup(info_tab[0]);
    free_array(info_tab);
    return (name);
}
