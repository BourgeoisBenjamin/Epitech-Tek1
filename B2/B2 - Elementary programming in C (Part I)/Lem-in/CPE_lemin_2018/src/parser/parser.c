/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** parser
*/

#include <lemin.h>

int parser(t_graph *graph)
{
    char *buffer = NULL;
    if ((graph->nb_ants = get_nb_ants()) == -1)
        return (-1);
    my_printf("%s\n", ROOMS);
    while ((buffer = get_next_line(0)) != NULL) {
        if ((check_line(graph, buffer)) == -1) {
            free(buffer);
            break;
        }
        free(buffer);
    }
    return (0);
}
