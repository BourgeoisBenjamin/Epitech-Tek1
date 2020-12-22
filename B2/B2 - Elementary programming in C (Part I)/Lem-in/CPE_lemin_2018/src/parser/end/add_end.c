/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** add_end
*/

#include <lemin.h>

int add_end(t_graph *graph)
{
    char **info_tab = NULL;

    if (graph->end != NULL)
        return (-1);

    if ((info_tab = fetch_end_room()) == NULL)
        return (-1);

    t_room *new_room = create_room(info_tab);

    if (new_room == NULL) {
        free_array(info_tab);
        return (-1);
    }
    free_array(info_tab);
    graph->end = new_room;
    if ((graph->index = add_room_in_index(graph->index, new_room)) == NULL)
        return (-1);
    return (0);
}
