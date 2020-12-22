/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** init_asm
*/

#include "asm.h"

asm_t *init_prog(void)
{
    asm_t *info = init_asm();

    if (info == NULL)
        return (NULL);
    info->input = init_info_file();
    info->output = init_info_file();
    info->header = init_header();
    if (info->input == NULL || info->header == NULL || info->output == NULL) {
        delete_all(info);
        return (NULL);
    }
    return (info);
}
