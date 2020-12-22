/*
** EPITECH PROJECT, 2019
** LEM-IN
** File description:
** print_my_graph_data
*/

#include "graph.h"

void print_my_graph_data(link_t *graph)
{
    link_t *temp = graph;
    print_link(graph);
    for (int i = 0; temp->next[i]; i++) {
        print_my_graph_data(temp->next[i]);
    }
}
