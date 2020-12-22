/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** header
*/

#ifndef GENERATOR_H
#define GENERATOR_H

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct s_node
{
    int x;
    int y;
    char c;
    char dirs;
    struct s_node *parent;
} t_node;

typedef struct s_maze
{
    int width;
    int height;
    int perfect;
    int posx;
    int posy;
    t_node *nodes;
} t_maze;

int error(int argc, char **argv);
void change_position(int *x, int *y, t_node *node, int dir);
int check_direction(int dir, t_node *node, t_maze *maze);
t_node *check_parent(t_node *dest, t_maze *maze, t_node *node);
void draw(t_node *nodes_array, int width, int height);
t_node *link_node(t_maze *maze, t_node *node);
t_maze *generate_maze(t_maze *maze);
int generator(int argc, char **argv);
t_maze *init(char **argv);
t_node *init_nodes_array(int width, int height);
void delete_all(t_maze *maze);

#endif
