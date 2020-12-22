/*
** EPITECH PROJECT, 2019
** boggle
** File description:
** boggle
*/

#include "boggle.h"

int boggle(int ac, char **av)
{
    boggle_t *info = init_boggle();

    if (info == NULL)
        return (84);
    if (parse_info(ac, av, info) == -1) {
        delete_all(info);
        return (84);
    }
    if (create_grid(info) == -1) {
        delete_all(info);
        return (84);
    }
    game(info);
    delete_all(info);
    return (0);
}
