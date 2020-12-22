/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** open_file
*/

#include "tetris.h"

void get_path(char *name_file, char path[PATH_MAX])
{
    my_strcpy(path, "tetriminos");
    my_strcat(path, "/");
    my_strcat(path, name_file);
}

int open_file(char *name)
{
    char path[PATH_MAX];
    int fd = -1;

    get_path(name, path);
    if ((fd = open(path, O_RDONLY)) == -1) {
        my_printe("Error: open() failed\n");
        return (-1);
    }
    return (fd);
}
