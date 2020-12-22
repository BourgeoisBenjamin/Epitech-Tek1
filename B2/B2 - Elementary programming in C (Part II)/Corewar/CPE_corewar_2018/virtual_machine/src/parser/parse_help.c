/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_help
*/

#include "vm.h"

void parse_help(char *arg, vm_t **info)
{
    if (my_strcmp(arg, "-h") == 0) {
        usage();
        delete_all(info);
        exit(0);
    }
}
