/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** save_data
*/

#include "asm.h"

int save_data(asm_t *info)
{
    if (create_header(info->header, info->input) == -1)
        return (-1);
    for (line_t *actual = info->input->lines->next->next; actual;
    actual = actual->next) {
        if (transform_line_data(actual, info) == -1)
            return (-1);
    }
    return (0);
}
