/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** write_log
*/

#include "asm.h"

int write_log(asm_t *info, info_file_t *output)
{
    my_printf("**************\nAssembling: %s\n", output->filename);
    my_printf("Name = %s\n", info->header->prog_name);
    my_printf("Comment = %s\n", info->header->comment);
    my_printf("**************\n");
    return (0);
}
