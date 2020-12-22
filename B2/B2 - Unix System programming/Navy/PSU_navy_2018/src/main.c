/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** main
*/

#include "navy.h"

int info_handler = 0;

int main(int argc, char **argv)
{
    if (help(argc, argv) == -1)
        return 84;
    t_game *info = init_game(argv);
    if (info == NULL) {
        free_all(info);
        return 84;
    }
    return (navy(argc, argv, info));
}
