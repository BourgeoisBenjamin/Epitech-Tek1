/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** init_asm_t
*/

#include "asm.h"

asm_t *init_asm(void)
{
    asm_t *new = NULL;

    new = malloc(sizeof(asm_t));
    if (new == NULL)
        return (NULL);
    new->input = NULL;
    new->output = NULL;
    new->header = NULL;

    return (new);
}
