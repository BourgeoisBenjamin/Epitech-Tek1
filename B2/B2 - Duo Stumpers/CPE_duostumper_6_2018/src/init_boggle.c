/*
** EPITECH PROJECT, 2019
** init boggle
** File description:
** init boggle
*/

#include "boggle.h"

boggle_t *init_boggle(void)
{
    boggle_t *info = malloc(sizeof(boggle_t));

    if (info == NULL)
        return (NULL);
    info->grid = NULL;
    info->size = 4;
    info->word = NULL;
    info->letter = NULL;
    return (info);
}

int create_grid(boggle_t *info)
{
    info->grid = create_array(info->size, info->size);
    if (info->grid == NULL)
        return (-1);
    for (int i = 0; i < info->size * info->size; i++) {
        info->grid[i / info->size][i % info->size] = info->letter[i];
    }
    return (0);
}
