/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** create_graph
*/

#include <lemin.h>

t_graph *create_graph(void)
{
    t_graph *graph = malloc(sizeof(t_graph));
    t_room **index = malloc(sizeof(t_room*));
    if (graph == NULL || index == NULL)
        return (NULL + my_printe("Error : malloc() failed\n"));
    index[0] = NULL;
    graph->index = index;
    graph->start = NULL;
    graph->end = NULL;
    graph->nb_ants = 0;
    return (graph);
}
