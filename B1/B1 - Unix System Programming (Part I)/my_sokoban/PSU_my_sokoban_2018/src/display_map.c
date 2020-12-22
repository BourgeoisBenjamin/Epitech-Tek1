/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** display_map.c
*/

#include <sokoban.h>

int display_map(t_map *map)
{
    clear();
    char *str = "Enlarge the terminal to display the whole map";
    int len = my_strlen(str);

    if (LINES < map->nb_rows || COLS < map->nb_cols) {
        mvprintw(LINES / 2, COLS / 2 - len / 2, str);
    } else {
        for (int i = 0; i < map->nb_rows; i++) {
            mvprintw(((LINES / 2) - (map->nb_rows / 2) + i),
                ((COLS / 2) - (map->nb_cols / 2)), map->map[i]);
        }
    }
    refresh();
    return 0;
}
