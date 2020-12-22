/*
** EPITECH PROJECT, 2019
** LEM-IN
** File description:
** print_data_of_connected_link
*/

#include "graph.h"

void print_data_of_connected_link(link_t *link)
{
    link_t **temp = link->next;

    for (int i = 0; temp[i]; i++)
        print_link(temp[i]);
}
