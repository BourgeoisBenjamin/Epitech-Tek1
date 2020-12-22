/*
** EPITECH PROJECT, 2019
** BOGGLE
** File description:
** delete_all
*/

#include "boggle.h"

void delete_all(boggle_t *info)
{
    if (info == NULL)
        return;
    if (info->grid)
        free_array(info->grid);
    if (info->letter)
        free(info->letter);
    if (info->word)
        free(info->word);
    free(info);
}
