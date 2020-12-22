/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** main file
*/

#include <intersection.h>

int main(int argc, char **argv)
{
    if (argc < 9 || argc > 9) {
        display_usage(argc, argv);
        return 84;
    }
    if (intersection(argc, argv) == 84)
        return 84;

    return 0;
}
