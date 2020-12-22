/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** write_output_file
*/

#include "asm.h"

int write_output_file(asm_t *info)
{
    write_log(info, info->output);
    if ((info->output->fd = open_file_fd(info->output->filename)) == -1)
        return (-1);
    if (write_header(info->output, info->header) == -1)
        return (-1);
    return (0);
}
