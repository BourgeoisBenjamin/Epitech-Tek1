/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** init_corewar
*/

#include "corewar.h"

corewar_t *init_corewar(void)
{
    corewar_t *info = malloc(sizeof(corewar_t));

    if (info == NULL)
        return (NULL);
    info->dump = -1;
    info->prog_number = -1;
    info->load_adress = -1;
    info->name = NULL;

    return (info);
}
