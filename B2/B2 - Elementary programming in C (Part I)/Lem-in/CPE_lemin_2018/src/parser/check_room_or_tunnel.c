/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** check_room_or_tunnel
*/

#include <lemin.h>

int check_room_or_tunnel(t_graph *graph, char *buffer)
{
    static int tunnel = 0;
    if (is_room(buffer)) {
        if (tunnel || (add_room(graph, buffer)) == -1)
            return (-1);
    } else if (is_tunnel(buffer)) {
        if (!tunnel) {
            my_printf("%s\n", TUNNELS);
            tunnel = 1;
        }
        if ((add_tunnel(graph, buffer)) == -1)
            return (-1);
    } else
        return (-1);
    return (0);
}
