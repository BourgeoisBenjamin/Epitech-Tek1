/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** add_tunnel
*/

#include <lemin.h>

int add_tunnel(t_graph *graph, char *buffer)
{
    char **info_tab = NULL;
    if ((info_tab = check_valid_tunnel(buffer)) == NULL)
        return (-1);

    t_room *room1 = fetch_room(graph->index, info_tab[0]);
    t_room *room2 = fetch_room(graph->index, info_tab[1]);
    free_array(info_tab);

    if (room1 == NULL || room2 == NULL)
        return (-1);

    if (connect_rooms(room1, room2) == -1)
        return (-1);

    return (0);
}
