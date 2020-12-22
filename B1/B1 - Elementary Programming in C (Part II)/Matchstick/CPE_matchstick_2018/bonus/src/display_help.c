/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** displ
*/

#include <matchstick.h>

void display_help(void)
{
    char *help = "[MATCHSTICK]\n\n"\
        "This project is based on a very famous game based"\
        "on matchsticks.\n"\
        "There is a certain number of matchstick lines.\n"\
        "The two players take turns; each player can, on a same line, "\
        "take one or several matchsticks.\n"\
        "The losing player is the one to take the last matchstick.\n\n";
    my_printf("%s", help);
    my_printf("./matchstick [n] [m]\n\t-> ./matchstick 10 5\n\n");
    my_printf("With:\n\t- [n] : number of matchstick lines (1 < n < 100)\n");
    my_printf("\t- [m] : the maximum number of matches that can be taken out");
    my_printf("each turn (must be > 0).\n");
}
