/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_nb_arg
*/

#include "vm.h"

int parse_nb_arg(int argc)
{
    if (argc < 2) {
        my_printe("Error : bad number of arguments.\nType ./corewar -h\n");
        return (-1);
    }
    return (0);
}
