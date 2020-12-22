/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** is_exist_room
*/

#include <lemin.h>

int is_same_co(char *x_r, char *y_r, t_room **index)
{
    int x = my_getnbr(x_r);
    int y = my_getnbr(y_r);
    for (int i = 0; index[i]; i++) {
        if (x == index[i]->x && y == index[i]->y)
            return (1);
    }
    return (0);
}
