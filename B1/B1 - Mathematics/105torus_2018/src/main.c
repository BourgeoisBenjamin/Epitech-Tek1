/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** main
*/

#include "torus.h"

int main(int argc, char **argv)
{
    if (argc != 8) {
        display_usage(argc, argv);
        return 84;
    }

    if (torus(argv))
        return 84;

    return 0;
}
