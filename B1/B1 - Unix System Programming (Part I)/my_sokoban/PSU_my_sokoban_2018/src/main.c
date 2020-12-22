/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** main
*/

#include <sokoban.h>

int main(int argc, char **argv)
{
    check_argv(argc, argv);
    if (sokoban(argv))
        return 1;
    else
        return 0;
}
