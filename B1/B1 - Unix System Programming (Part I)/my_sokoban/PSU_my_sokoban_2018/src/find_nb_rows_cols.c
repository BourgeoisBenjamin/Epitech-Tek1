/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** main
*/

#include <sokoban.h>

int find_nb_rows_cols(char **argv, t_map *map)
{
    FILE * fd;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fd = fopen(argv[1], "r");
    if (fd == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fd)) != -1) {
        map->nb_rows++;
        if (read > map->nb_cols)
            map->nb_cols = read;
    }
    if (line)
        free(line);
    fclose(fd);
    return 0;
}