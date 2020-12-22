/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** display_map
*/

#include "navy.h"

void display_map(char **map_player, char **map_enemy)
{
    my_printf("my positions:\n");
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 0; map_player[i]; i++) {
        my_printf("%i|%c %c %c %c %c %c %c %c\n", i + 1, map_player[i][0],
        map_player[i][1], map_player[i][2], map_player[i][3],
        map_player[i][4], map_player[i][5], map_player[i][6],
        map_player[i][7]);
    }
    my_putchar('\n');
    my_printf("enemy's positions:\n");
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 0; map_enemy[i]; i++) {
        my_printf("%i|%c %c %c %c %c %c %c %c\n", i + 1, map_enemy[i][0],
        map_enemy[i][1], map_enemy[i][2], map_enemy[i][3], map_enemy[i][4],
        map_enemy[i][5], map_enemy[i][6], map_enemy[i][7]);
    }
    my_putchar('\n');
}
