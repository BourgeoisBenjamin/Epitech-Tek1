/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** navy
*/

#include "navy.h"

int navy(int argc, char **argv, t_game *info)
{
    if (argc == 2) {
        if (parse_map(argv[1], info) == -1) {
            free_all(info);
            return 84;
        }
        server(info);
    } else if (argc == 3) {
        if (parse_map(argv[2], info) == -1) {
            free_all(info);
            return 84;
        }
        if (client(info) == -1)
            return 84;
    }
    int win = info->win;
    free_all(info);
    return win;
}
