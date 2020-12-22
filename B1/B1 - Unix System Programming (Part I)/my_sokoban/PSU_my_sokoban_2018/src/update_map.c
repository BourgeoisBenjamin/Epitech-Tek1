/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** update_map.c
*/

#include <sokoban.h>

int update_map(t_map *map, t_player *player)
{
    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++) {
            set_player_position(map, player, i, j);
            replace_o(map, i, j);
        }
    }
    return 0;
}

void set_player_position(t_map *map, t_player *player, int i, int j)
{
    if (map->map[i][j] == 'P') {
        player->x = i;
        player->y = j;
    }
}

void replace_o(t_map *map, int i, int j)
{
    if (map->original_map[i][j] == 'O' && map->map[i][j] == ' ')
        map->map[i][j] = 'O';
}