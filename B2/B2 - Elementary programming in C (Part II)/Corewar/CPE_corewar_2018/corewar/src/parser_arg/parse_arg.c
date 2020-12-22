/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** parse_arg
*/

#include "corewar.h"

int parse_arg(int argc, char **argv, corewar_t *info)
{
    for (int i = 1; i < argc;) {
        parse_help(argv, info, i);
        if (parse_name(argv, info, i)) {
            i += 1;
            continue;
        }
        if (i + 1 == argc)
            return (-1 + my_printe("Error : bad number of arguments\n"));
        if (parse_cycle(argv, info, i) == -1)
            return (-1);
        if (parse_prognumber(argv, info, i) == -1)
            return (-1);
        if (parse_loadaddress(argv, info, i) == -1)
            return (-1);
        if (wrong_argument(argv, i))
            return (-1);
        i += 2;
    }
    return (0);
}
