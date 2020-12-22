/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** parse_file_tetriminos
*/

#include "tetris.h"

t_tetriminos *read_file_tetrimino(t_tetriminos *new, struct dirent *dp)
{
    int fd = open_file(dp->d_name);
    if (fd == -1)
        return (delete_tetriminos(new));
    if (get_size_color_tetrimino(new, fd) == -1) {
        new->error = 1;
        close(fd);
        return (new);
    }
    if (get_form_tetrimino(new, fd) == -1) {
        new->error = 1;
        close(fd);
        return (new);
    }
    close(fd);
    return (new);
}

t_tetriminos *parse_file_tetriminos(struct dirent *dp)
{
    t_tetriminos *new = init_new_tetriminos();
    if (new == NULL)
        return (NULL);
    if ((new->name = get_name_tetrimino(dp)) == NULL)
        return (delete_tetriminos(new));
    if ((new = read_file_tetrimino(new, dp)) == NULL)
        return (new);
    return (new);
}
