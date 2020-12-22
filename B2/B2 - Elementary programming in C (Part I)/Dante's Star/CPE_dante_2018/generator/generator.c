/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** main
*/

#include "generator.h"

t_node *link_node(t_maze *maze, t_node *node)
{
    char dir = 0;
    t_node *dest = NULL;
    maze->posx = 0;
    maze->posy = 0;
    if (node == NULL)
        return (NULL);
    while (node->dirs) {
        dir = (1 << (rand() % 4));
        if (~node->dirs & dir) {
            continue;
        }
        node->dirs &= ~dir;
        if (check_direction(dir, node, maze))
            continue;
        dest = maze->nodes + maze->posx + maze->posy * maze->width;
        if ((dest = check_parent(dest, maze, node)) != NULL)
            return (dest);
    }
    return (node->parent);
}

t_maze *generate_maze(t_maze *maze)
{
    t_node *start = NULL;
    t_node *last = NULL;

    srand(time(NULL));

    start = maze->nodes + 1 + maze->width;
    start->parent = start;
    last = start;

    while ((last = link_node(maze, last)) != start);
    maze->nodes->c = ' ';
    (maze->nodes + 1)->c = ' ';
    if (maze->width % 2 != 0 && maze->height % 2 != 0) {
        (maze->nodes + (maze->height * maze->width) - 1)->c = ' ';
        (maze->nodes + ((maze->height - 1) * maze->width) - 1)->c = ' ';
    } else
        (maze->nodes + (maze->height * maze->width) - 1)->c = ' ';
    return (maze);
}

int generator(int argc, char **argv)
{
    t_maze *maze = NULL;
    if (error(argc, argv) == -1)
        return (84);
    if ((maze = init(argv)) == NULL)
        return (84);
    if ((maze->nodes = init_nodes_array(maze->width, maze->height)) == NULL)
        return (84);
    if ((maze = generate_maze(maze)) == NULL)
        return (84);
    draw(maze->nodes, maze->width, maze->height);
    delete_all(maze);
    return (0);
}
