/*
** EPITECH PROJECT, 2019
** LEM-IN
** File description:
** header
*/

#include <stdlib.h>

typedef struct link
{
    int data;
    struct link **next;
} link_t;

link_t *create_link(int data);
void print_link(link_t *link);
int my_put_nbr(int nbr);
void connect_links(link_t *link1, link_t *link2);
void print_data_of_connected_link(link_t *link);
link_t *build_my_graph(void);
