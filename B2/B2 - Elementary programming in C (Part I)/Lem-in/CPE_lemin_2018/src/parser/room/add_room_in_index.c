/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** add_room_in_index
*/

#include <lemin.h>

t_room **add_room_in_index(t_room **index, t_room *new_room)
{
    int nb_room = get_nb_rooms(index);
    t_room **new_index = malloc(sizeof(t_room*) * (nb_room + 2));
    if (new_index == NULL) {
        delete_index(index);
        return (NULL);
    }
    for (int i = 0; index[i]; i++) {
        new_index[i] = index[i];
    }
    new_index[nb_room] = new_room;
    new_index[nb_room + 1] = NULL;
    free(index);
    return (new_index);
}
