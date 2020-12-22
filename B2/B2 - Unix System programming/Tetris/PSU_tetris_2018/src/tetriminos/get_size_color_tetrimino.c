/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** get_size_color_tetrimino
*/

#include "tetris.h"

int parse_size_color_tetrimino(char **info_tab, t_tetriminos *new)
{
    if (get_size_array(info_tab) != 3) {
        free_array(info_tab);
        return (-1);
    }
    if ((new->width = my_getnbr(info_tab[0])) <= 0
    || (new->height = my_getnbr(info_tab[1])) <= 0) {
        free_array(info_tab);
        return (-1);
    }
    new->color = my_getnbr(info_tab[2]);
    if (new->color < 0 || new->color > 7) {
        free_array(info_tab);
        return (-1);
    }
    free_array(info_tab);
    return (0);
}

int get_size_color_tetrimino(t_tetriminos *new, int fd)
{
    char *line = get_next_line(fd);
    char **info_tab = NULL;
    if (line == NULL)
        return (-1);
    if ((info_tab = my_str_to_word_array(line, ' ')) == NULL) {
        free(line);
        return (-1);
    }
    free(line);
    return (parse_size_color_tetrimino(info_tab, new));
}
