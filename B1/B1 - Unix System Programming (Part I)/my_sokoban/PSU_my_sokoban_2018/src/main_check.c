/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** check map function
*/

#include <sokoban.h>

int check_map(t_map *map)
{
    if (check_op_player(map) && check_dimension(map))
        return 1;
    else
        return 0;
}

int check_dimension(t_map *map)
{
    if (map->nb_cols < 3 || map->nb_rows < 3)
        return 0;
    else
        return 1;
}

int check_op_player(t_map *map)
{
    int o = 0;
    int x = 0;
    int p = 0;

    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++) {
            check_op_player2(map->map[i][j], &x, &o, &p);
        }
    }
    if (o != x || o ==  0 || p != 1)
        return 0;
    else
        return 1;
}

int check_op_player2(char c, int *x, int *o, int *p)
{
    switch (c) {
    case 'X':
        (*x)++;
        break;
    case 'O':
        (*o)++;
        break;
    case 'P':
        (*p)++;
        break;
    }
    return 0;
}

int check_str(t_map *map)
{
    for (int i = 0; map->str[i] != '\0'; i++) {
        if (map->str[i] != '#' && map->str[i] != 'P' && map->str[i] != '\n'
            && map->str[i] != ' ' && map->str[i] != 'X' && map->str[i] != 'O')
            return 0;
    }
    return 1;
}