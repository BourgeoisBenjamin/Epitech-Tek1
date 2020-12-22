/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** lemin
*/

#include <lemin.h>

int check_graph(t_graph *graph)
{
    if (graph->start == NULL || graph->end == NULL)
        return (-1);
    if (graph->start->next[0] == NULL)
        return (-1);
    return (0);
}

int lemin(void)
{
    t_graph *graph = create_graph();
    if (graph == NULL)
        return (84);
    if (parser(graph) == -1) {
        delete_graph(graph);
        return (84);
    }
    if (check_graph(graph) == -1) {
        delete_graph(graph);
        return (84);
    }
    delete_graph(graph);
    return (0);
}
