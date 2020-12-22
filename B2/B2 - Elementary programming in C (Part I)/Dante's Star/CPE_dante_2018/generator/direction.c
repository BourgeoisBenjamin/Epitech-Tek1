/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** main
*/

#include "generator.h"

void change_position(int *x, int *y, t_node *node, int dir)
{
    if (dir == 1) {
        *x = node->x + 2;
        *y = node->y;
    }
    if (dir == 2) {
        *x = node->x;
        *y = node->y + 2;
    }
    if (dir == 4) {
        *x = node->x - 2;
        *y = node->y;
    }
    if (dir == 8) {
        *x = node->x;
        *y = node->y - 2;
    }
}

int check_direction(int dir, t_node *node, t_maze *maze)
{
    if (dir == 1) {
        if (node->x + 2 < maze->width) {
            change_position(&maze->posx, &maze->posy, node, 1);
        } else return (1);
    } else if (dir == 2) {
        if (node->y + 2 < maze->height) {
            change_position(&maze->posx, &maze->posy, node, 2);
        } else return (1);
    }
    if (dir == 4) {
        if (node->x - 2 >= 0) {
            change_position(&maze->posx, &maze->posy, node, 4);
        } else return (1);
    } else if (dir == 8) {
        if (node->y - 2 >= 0) {
            change_position(&maze->posx, &maze->posy, node, 8);
        } else return (1);
    }
    return (0);
}

t_node *check_parent(t_node *dest, t_maze *maze, t_node *node)
{
    if (dest->c == ' ') {
        if (dest->parent != NULL)
            return (NULL);
        dest->parent = node;
        maze->nodes[node->x + (maze->posx - node->x) / 2
        + (node->y + (maze->posy - node->y) / 2) * maze->width].c = ' ';
        return (dest);
    }
    return (NULL);
}
