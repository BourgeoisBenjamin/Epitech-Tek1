/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** main
*/

#include "generator.h"

void delete_all(t_maze *maze)
{
    if (maze == NULL)
        return;
    if (maze->nodes != NULL)
        free(maze->nodes);
    free(maze);
}
