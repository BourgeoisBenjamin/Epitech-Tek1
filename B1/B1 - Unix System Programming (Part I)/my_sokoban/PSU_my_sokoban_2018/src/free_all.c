/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** free_all.c
*/

#include <sokoban.h>

void free_all(t_map *map, t_player *player)
{
    free(player);
    free_char_array(map->map, map->nb_rows);
    free_char_array(map->original_map, map->nb_rows);
    free(map->str);
    free(map);
}

void free_char_array(char **array, int rows)
{
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}