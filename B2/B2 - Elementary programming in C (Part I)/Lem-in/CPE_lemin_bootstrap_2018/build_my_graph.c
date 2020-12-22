/*
** EPITECH PROJECT, 2019
** LEM-IN
** File description:
** build_my_graph
*/

#include "graph.h"

link_t *build_my_graph(void)
{
    link_t *link1 = create_link(42);
    link_t *link2 = create_link(60012);
    link_t *link3 = create_link(30012);
    link_t *link4 = create_link(48);
    link_t *link5 = create_link(50012);
    link_t *link6 = create_link(3);
    link_t *link7 = create_link(98);
    link_t *link8 = create_link(8);
    connect_links(link1, link2);
    connect_links(link1, link4);
    connect_links(link2, link3);
    connect_links(link4, link5);
    connect_links(link5, link6);
    connect_links(link6, link7);
    connect_links(link6, link8);
    return link1;
}
