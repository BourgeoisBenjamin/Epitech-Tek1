/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** delete_all
*/

#include "asm.h"

void delete_all(asm_t *info)
{
    if (!info)
        return;
    if (info->input)
        delete_info_file(info->input);
    if (info->output)
        delete_info_file(info->output);
    if (info->header)
        delete_header(info->header);
    free(info);
}
