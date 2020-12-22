/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** main.c
*/

#include <popup.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    my_popup(argv[1]);

    return 0;
}
