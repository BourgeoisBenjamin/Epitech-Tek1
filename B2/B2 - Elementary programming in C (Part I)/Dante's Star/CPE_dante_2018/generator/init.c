/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** main
*/

#include "generator.h"

t_maze *init(char **argv)
{
    t_maze *maze = malloc(sizeof(t_maze));
    if (maze == NULL)
        return (NULL);
    maze->nodes = NULL;
    maze->width = my_getnbr(argv[1]);
    maze->height = my_getnbr(argv[2]);
    maze->posx = 0;
    maze->posy = 0;
    if (argv[3])
        maze->perfect = 0;
    else
        maze->perfect = 1;
    return (maze);
}

t_node *init_nodes_array(int width, int height)
{
    t_node *nodes_array = malloc(sizeof(t_node) * (width * height));
    if (nodes_array == NULL)
        return (NULL);
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            nodes_array[i + j * width].parent = NULL;
            if (i * j % 2) {
                nodes_array[i + j * width].x = i;
                nodes_array[i + j * width].y = j;
                nodes_array[i + j * width].dirs = 15;
                nodes_array[i + j * width].c = ' ';
            } else {
                nodes_array[i + j * width].c = '#';
            }
        }
    }
    return (nodes_array);
}
