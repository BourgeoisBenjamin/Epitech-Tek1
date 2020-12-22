/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Check function file
*/

#include "navy.h"

int open_file(char *file)
{
    int fd = 0;
    if ((fd = open(file, O_RDONLY)) < 0) {
        my_printe("%s : File not found\n", file);
        return -1;
    }
    return fd;
}

int check_file(char *file)
{
    int fd = 0;
    if ((fd = open_file(file)) == -1) {
        close(fd);
        return -1;
    }
    if (read_file(fd) == -1) {
        close(fd);
        return -1;
    }
    close(fd);
    return 0;
}

int read_file(int fd)
{
    char *line = NULL;
    int nb_line = 0;

    while ((line = get_next_line(fd)) != NULL) {
        nb_line++;
        if (valid_line(line) == -1)
            return (error_file(line));
        free(line);
    }
    if (nb_line != 4)
        return -1;
    return 0;
}
