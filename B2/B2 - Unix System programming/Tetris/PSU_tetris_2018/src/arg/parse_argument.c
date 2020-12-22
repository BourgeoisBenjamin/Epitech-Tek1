/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** parse_argument
*/

#include "tetris.h"

int parse_argument(int argc, char **argv, t_tetris *info)
{
    info->settings->argv = argv;
    opterr = 0;
    if (run_get_opt(argc, argv, info) == -1)
        return (-1);
    if (is_same_key(info->settings))
        return (-1);
    if (optind < argc) {
        my_printe("Non-option elements\n");
        return (-1);
    }
    return (0);
}
