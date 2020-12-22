/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** delete_all
*/

#include "corewar.h"

void delete_all(corewar_t *info)
{
    if (!info)
        return;
    if (info->name)
        free(info->name);
    free(info);
}
