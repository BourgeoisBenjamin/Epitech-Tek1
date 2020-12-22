/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** movements.c
*/

#include <sokoban.h>

int move_up(t_map *map, t_player *player)
{
    if (map->map[player->x - 1][player->y] == ' '
        || map->map[player->x - 1][player->y] == 'O') {
        map->map[player->x - 1][player->y] = 'P';
        map->map[player->x][player->y] = ' ';
    }
    if (map->map[player->x - 1][player->y] == 'X'
        && map->map[player->x - 2][player->y] != '#'
        && map->map[player->x - 2][player->y] != 'X') {
        map->map[player->x - 1][player->y] = 'P';
        map->map[player->x - 2][player->y] = 'X';
        map->map[player->x][player->y] = ' ';
    }
    return 0;
}

int move_down(t_map *map, t_player *player)
{
    if (map->map[player->x + 1][player->y] == ' '
        || map->map[player->x + 1][player->y] == 'O') {
        map->map[player->x + 1][player->y] = 'P';
        map->map[player->x][player->y] = ' ';
    }
    if (map->map[player->x + 1][player->y] == 'X'
        && map->map[player->x + 2][player->y] != '#'
        && map->map[player->x + 2][player->y] != 'X') {
        map->map[player->x + 1][player->y] = 'P';
        map->map[player->x + 2][player->y] = 'X';
        map->map[player->x][player->y] = ' ';
    }
    return 0;
}

int move_left(t_map *map, t_player *player)
{
    if (map->map[player->x][player->y - 1] == ' '
        || map->map[player->x][player->y - 1] == 'O') {
        map->map[player->x][player->y - 1] = 'P';
        map->map[player->x][player->y] = ' ';
    }
    if (map->map[player->x][player->y - 1] == 'X'
        && map->map[player->x][player->y - 2] != '#'
        && map->map[player->x][player->y - 2] != 'X') {
        map->map[player->x][player->y - 1] = 'P';
        map->map[player->x][player->y - 2] = 'X';
        map->map[player->x][player->y] = ' ';
    }
    return 0;
}

int move_right(t_map *map, t_player *player)
{
    if (map->map[player->x][player->y + 1] == ' '
        || map->map[player->x][player->y + 1] == 'O') {
        map->map[player->x][player->y + 1] = 'P';
        map->map[player->x][player->y] = ' ';
    }
    if (map->map[player->x][player->y + 1] == 'X'
        && map->map[player->x][player->y + 2] != '#'
        && map->map[player->x][player->y + 2] != 'X') {
        map->map[player->x][player->y + 1] = 'P';
        map->map[player->x][player->y + 2] = 'X';
        map->map[player->x][player->y] = ' ';
    }
    return 0;
}