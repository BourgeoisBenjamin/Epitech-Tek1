/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** delete_header
*/

#include "asm.h"

void delete_header(header_t *header)
{
    if (!header)
        return;
    free(header);
}
