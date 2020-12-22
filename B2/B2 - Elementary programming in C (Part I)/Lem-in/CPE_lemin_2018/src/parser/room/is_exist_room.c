/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** is_exist_room
*/

#include <lemin.h>

int is_exist_room(char *name, t_room **index)
{
    for (int i = 0; index[i]; i++) {
        if (my_strcmp(index[i]->name, name) == 0
        && my_strlen(index[i]->name) == my_strlen(name)) {
            return (1);
        }
    }
    return (0);
}
