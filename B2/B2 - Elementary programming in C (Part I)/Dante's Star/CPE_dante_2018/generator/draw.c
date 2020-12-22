/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** main
*/

#include "generator.h"

void draw(t_node *nodes_array, int width, int height)
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            my_printf("%c", nodes_array[j + i * width].c);
        }
        if (i + 1 != height)
            my_printf("\n");
    }
}
