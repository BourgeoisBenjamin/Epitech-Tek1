/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** check function
*/

#include <sokoban.h>

int display_usage(void)
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, ");
    my_printf("containing '#' for walls, \n          'P' for the ");
    my_printf("player, 'X' for boxes and 'O' for storage locations.\n");

    return 0;
}

int check_argv(int argc, char **argv)
{
    if (argc != 2) {
        my_printf("Usage: ./my_sokoban [-h] <map>\n");
        exit(84);
    } else if (argv[1][0] == '-') {
        if (argv[1][1] == 'h') {
            display_usage();
            exit(84);
        } else {
            my_printf("Usage: ./my_sokoban [-h] <map>\n");
            exit(84);
        }
    }
    return 0;
}