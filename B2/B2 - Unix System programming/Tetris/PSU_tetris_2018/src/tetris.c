/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** tetris
*/

#include "tetris.h"

int tetris(int argc, char **argv)
{
    t_tetris *info = init();
    if (info == NULL)
        return (84);
    if (parse_argument(argc, argv, info) == -1) {
        delete_all(info);
        return (84);
    }
    if ((info->tetriminos = get_tetriminos(info->tetriminos)) == NULL) {
        delete_all(info);
        return (84);
    }
    if (game(info) == -1) {
        set_input_term(0);
        delete_all(info);
        return (84);
    }
    set_input_term(0);
    delete_all(info);
    return (0);
}
