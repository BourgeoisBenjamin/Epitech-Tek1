/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** connect_rooms
*/

#include <lemin.h>

int connect_rooms(t_room *room1, t_room *room2)
{
    int nb_room = get_nb_rooms(room1->next);
    t_room **new_next = malloc(sizeof(t_room*) * (nb_room + 2));

    if (new_next == NULL)
        return (-1);

    for (int i = 0; room1->next[i]; i++)
        new_next[i] = room1->next[i];
    new_next[nb_room] = room2;
    new_next[nb_room + 1] = NULL;

    free(room1->next);
    room1->next = new_next;
    my_printf("%s-%s\n", room1->name, room2->name);
    return (0);
}
