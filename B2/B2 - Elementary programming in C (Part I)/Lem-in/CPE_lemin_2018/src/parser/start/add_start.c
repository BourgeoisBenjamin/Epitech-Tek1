/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** add_start
*/

#include <lemin.h>

int add_start(t_graph *graph)
{
    char **info_tab = NULL;

    if (graph->start != NULL)
        return (-1);

    if ((info_tab = fetch_start_room()) == NULL)
        return (-1);

    t_room *new_room = create_room(info_tab);
    if (new_room == NULL) {
        free_array(info_tab);
        return (-1);
    }
    new_room->weight = 0;
    new_room->ant = graph->nb_ants;
    free_array(info_tab);
    graph->start = new_room;
    if ((graph->index = add_room_in_index(graph->index, new_room)) == NULL)
        return (-1);
    return (0);
}
