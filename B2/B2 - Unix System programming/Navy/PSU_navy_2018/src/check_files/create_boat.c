/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** create_boat function
*/

#include "navy.h"

void create_boat_vert(int len, char *line, char **map)
{
    if (line[3] < line[6]) {
        for (int i = 0; i < len; i++)
            map[line[3] - '0' + i - 1][line[2] - 'A'] = line[0];
    } else {
        for (int i = 0; i < len; i++)
            map[line[3] - '0' - i - 1][line[2] - 'A'] = line[0];
    }
}

void create_boat_hor(int len, char *line, char **map)
{
    if (line[2] < line[5]) {
        for (int i = 0; i < len; i++)
            map[line[3] - '0' - 1][line[2] - 'A' + i] = line[0];
    } else {
        for (int i = 0; i < len; i++)
            map[line[3] - '0' - 1][line[2] - 'A' - i] = line[0];
    }
}

void create_boat(char *line, char **map)
{
    int len = my_getnbr(line);
    if (line[2] == line[5])
        create_boat_vert(len, line, map);
    else
        create_boat_hor(len, line, map);
}
