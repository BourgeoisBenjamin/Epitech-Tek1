/*
** EPITECH PROJECT, 2019
** BOGGLE
** File description:
** display
*/

#include "boggle.h"

void display_line(int size)
{
    for (int i = 0; i < (size * 2 + 3); i++) {
        my_printf("+");
    }
    my_printf("\n");
}

void display_middle_line(char *grid, int size)
{
    my_printf("| ");
    for (int i = 0; i < size; i++) {
        my_printf("%c ", grid[i]);
    }
    my_printf("|\n");
}

void display_grid(boggle_t *info)
{
    display_line(info->size);
    for (int i = 0; i < info->size; i++) {
        display_middle_line(info->grid[i], info->size);
    }
    display_line(info->size);
}
