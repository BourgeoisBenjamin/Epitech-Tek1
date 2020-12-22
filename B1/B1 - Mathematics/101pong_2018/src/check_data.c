/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** check_data.c
*/

#include <pong.h>

int check_data(int argc, char **argv)
{
    if (argc != 8) {
        display_usage();
        exit(84);
    }

    if (atoi(argv[7]) < 0)
        exit(84);

    if (atoi(argv[7]) != atof(argv[7]))
        exit(84);

    for (int i = 0; argv[7][i] != '\0'; i++)
    {
        if (!('0' < argv[7][i] && argv[7][i] < '9'))
        {
            exit(84);
        }
    }
    return 0;
}
