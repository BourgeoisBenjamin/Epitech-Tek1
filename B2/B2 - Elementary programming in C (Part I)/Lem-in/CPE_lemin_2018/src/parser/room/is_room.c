/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** is_room
*/

#include <lemin.h>

int is_room(char *buffer)
{
    int space = 0;
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == ' ')
            space++;
    }
    if (space != 2)
        return (0);
    return (1);
}
