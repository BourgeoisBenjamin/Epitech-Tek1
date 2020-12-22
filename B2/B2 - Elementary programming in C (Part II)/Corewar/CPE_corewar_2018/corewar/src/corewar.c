/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** corewar
*/

#include "corewar.h"

int corewar(int argc, char **argv)
{
    corewar_t *info = init_corewar();
    if (parse_arg(argc, argv, info) == -1) {
        delete_all(info);
        return (84);
    }
    delete_all(info);
    return (0);
}
