/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** display_usage.c
*/

#include <pong.h>

void display_usage(void)
{
    printf("USAGE\n");
    printf("        ./101pong x0 y0 z0 x1 y1 z1 n\n\n");
    printf("DESCRIPTION\n");
    printf("        x0 (only number)              ball abscissa at time t - 1\n");
    printf("        y0 (only number)              ball ordinate at time t - 1\n");
    printf("        z0 (only number)              ball altitude at time t - 1\n");
    printf("        x1 (only number)              ball abscissa at time t\n");
    printf("        y1 (only number)              ball ordinate at time t\n");
    printf("        z1 (only number)              ball altitude at time t\n");
    printf("        n  (only positive integer)    time shift (greater than or equal to zero, integer)\n");
}
