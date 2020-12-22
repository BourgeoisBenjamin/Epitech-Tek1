/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parser
*/

#include "asm.h"

int parse_arg(int argc, char **argv, asm_t *info)
{
    if (parse_nb_arg(argc) == -1)
        return (-1);
    parse_help(argv[1], info);
    if ((info->input->filename = get_input_filename(argv)) == NULL)
        return (-1);
    return (0);
}
