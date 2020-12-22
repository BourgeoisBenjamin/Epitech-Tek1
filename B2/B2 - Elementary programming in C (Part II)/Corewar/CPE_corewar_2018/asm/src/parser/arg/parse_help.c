/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_help
*/

#include "asm.h"

void parse_help(char *arg, asm_t *info)
{
    if (my_strcmp(arg, "-h") == 0) {
        usage();
        delete_all(info);
        exit(0);
    }
}
