/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** mem_alloc_2d_array
*/

#include <sokoban.h>

char **mem_alloc_2d_array(t_map *map)
{
    char **tab = malloc(sizeof(char *) * map->nb_rows);

    if (tab == NULL) {
        free(tab);
        my_puterror("Error, retry\n");
        exit(84);
    }
    for (int i = 0; i < map->nb_rows; i++) {
        tab[i] = malloc(sizeof(char) * map->nb_cols + 1);
        if (tab[i] == NULL) {
            free(tab);
            my_puterror("Error, retry\n");
            exit(84);
        }
    }
    return tab;
}

char **str_to_2d_array(t_map *map)
{
    int count = 0;
    int j = 0;
    char **tab = mem_alloc_2d_array(map);

    for (int i = 0; i < map->nb_rows; i++) {
        for (j = 0; map->str[count] != '\n'; j++) {
            tab[i][j] = map->str[count];
            count++;
        }
        tab[i][j] = map->str[count];
        tab[i][j+1] = '\0';
        count++;
        j = 0;
    }
    return tab;
}
