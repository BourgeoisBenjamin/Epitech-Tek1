/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** game_check.c
*/

#include <sokoban.h>

int game_win(t_map *map)
{
    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++) {
            if (map->original_map[i][j] == 'O' && map->map[i][j] != 'X') {
                return 0;
            }
        }
    }
    return 1;
}

int game_blocked(t_map *map)
{
    int blocked = 0;
    int x = 0;

    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++) {
            if (map->map[i][j] == 'X') {
                blocked += corner(map, i, j);
                x++;
            }
        }
    }
    if (blocked > 0 && blocked == x)
        return 1;
    else
        return 0;
}

int corner(t_map *map, int i, int j)
{
    if (map->map[i][j - 1] == '#' && map->map[i - 1][j] == '#')
        return 1;
    if (map->map[i - 1][j] == '#' && map->map[i][j + 1] == '#')
        return 1;
    if (map->map[i][j + 1] == '#' && map->map[i + 1][j] == '#')
        return 1;
    if (map->map[i + 1][j] == '#' && map->map[i][j - 1] == '#')
        return 1;
    return 0;
}