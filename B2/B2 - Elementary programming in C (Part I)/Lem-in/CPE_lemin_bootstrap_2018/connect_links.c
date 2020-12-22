/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** description
*/

#include "graph.h"

int get_nb_link(link_t **link_array)
{
    int nb_link = 0;
    while (link_array[nb_link] != NULL)
        nb_link++;
    return nb_link;
}

void connect_links(link_t *link1, link_t *link2)
{
    int nb_link = get_nb_link(link1->next);
    link_t **new_array = malloc(sizeof(link_t) * (nb_link + 2));

    if (new_array == NULL)
        return;

    for (int i = 0; link1->next[i]; i++)
        new_array[i] = link1->next[i];
    new_array[nb_link] = link2;
    new_array[nb_link + 1] = NULL;

    free(link1->next);
    link1->next = new_array;
}
