/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** run_get_opt
*/

#include "tetris.h"

int run_get_opt(int argc, char **argv, t_tetris *info)
{
    int c = 0;
    char *s_options = "L:l:r:t:d:q:p:wD";
    const struct option l_options[] = {
        {"help", 0, NULL, 'h'}, {"level", 1, NULL, 'L'},
        {"key-left", 1, NULL, 'l'}, {"key-right", 1, NULL, 'r'},
        {"key-turn", 1, NULL, 't'}, {"key-drop", 1, NULL, 'd'},
        {"key-quit", 1, NULL, 'q'}, {"key-pause", 1, NULL, 'p'},
        {"map-size", 1, NULL, 'm'}, {"without-next", 0, NULL, 'w'},
        {"debug", 0, NULL, 'D'}, {NULL, 0, NULL, 0}
    };
    while ((c = getopt_long(argc, argv, s_options, l_options, NULL)) != -1) {
        if (verif_argument(c, info) == -1) {
            wrong_argument();
            return (-1);
        }
    }
    return (0);
}
