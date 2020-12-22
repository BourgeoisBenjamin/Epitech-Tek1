/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** fetch_room
*/

#include <lemin.h>

t_room *fetch_room(t_room **index, char *name)
{
    for (int i = 0; index[i]; i++) {
        if (my_strcmp(index[i]->name, name) == 0
            && my_strlen(index[i]->name) == my_strlen(name))
            return index[i];
    }
    return (NULL);
}
