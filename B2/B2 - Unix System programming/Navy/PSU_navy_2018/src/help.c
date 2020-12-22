/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Help function file
*/

#include "navy.h"

int help(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            display_help();
            return -1;
        }
    } else if (argc != 2 && argc != 3) {
        display_wrong_usage();
        return -1;
    }
    return 0;
}

void display_help(void)
{
    my_printf("USAGE\n");
    my_printf("\t./navy [first_player_pid] navy_positions\n");
    my_printf("DESCRIPTION\n");
    my_printf("\tfirst_player_pid: only for the 2nd player."\
    " pid of the first player.\n");
    my_printf("\tnavy_positions: file representing the position"\
    " of the ships.\n");
}

void display_wrong_usage(void)
{
    my_printf("Wrong usage. See ./navy -h for more help\n");
}
