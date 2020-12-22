/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** delete_ft
*/

#include "lemin.h"

void delete_index(t_room **index)
{
    int i = 0;
    while (index[i] != NULL) {
        if (index[i]->name)
            free(index[i]->name);
        if (index[i]->next)
            free(index[i]->next);
        free(index[i]);
        i++;
    }
    free(index);
}

void delete_graph(t_graph *graph)
{
    if (graph->index)
        delete_index(graph->index);
    free(graph);
}

char *delete_room(t_room *room)
{
    if (room->name)
        free(room->name);
    if (room->next)
        free(room->next);
    if (room)
        free(room);
    return (NULL);
}
