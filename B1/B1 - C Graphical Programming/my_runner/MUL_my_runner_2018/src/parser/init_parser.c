/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_parser
*/

#include <runner.h>

int init_parser(t_parser *map, char *path)
{
    map->fd = fopen(path, "r+");
    if (map->fd == NULL) {
        my_print_error(path);
        return 84;
    }
    map->line = NULL;
    map->len = 0;
    map->read = 0;
    return 0;
}

int my_print_error(char *path)
{
    if (errno == EISDIR) {
        write(2, path, my_strlen(path));
        write(2, ":", 1);
        write(2, " Is a directory\n", 16);
        return 84;
    } else if (errno == ENOENT) {
        write(2, path, my_strlen(path));
        write(2, ":", 1);
        write(2, " No such file or directory\n", 28);
        return 84;
    }
    return 0;
}