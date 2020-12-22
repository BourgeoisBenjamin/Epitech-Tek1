/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** write_header
*/

#include "asm.h"

int write_header(info_file_t *output, header_t *header)
{
    if (write(output->fd, header, sizeof(header_t)) == -1)
        return (-1);
    return (0);
}
