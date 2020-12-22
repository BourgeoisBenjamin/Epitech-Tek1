/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** display_usage
*/

#include "torus.h"

int display_usage(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            printf("USAGE\n");
            printf("\t./105torus opt a0 a1 a2 a3 a4 n\n\n");
            printf("DESCRIPTION\n");
            printf("\topt\tmethod option:\n");
            printf("\t\t\t1 for the bisection method\n\t\t\t2 for the Newton's method\n\t\t\t3 for the secant method\n");
            printf("\ta[0-4]\tcoefficients of the equation\n");
            printf("\tn\tprecision (the application of the polynomial to the solution should be smaller than 10ˆ-n)\n");
        } else {
            printf("Wrong usage. Enter ./105torus -h to see usage\n");
        }
    } else {
        printf("Wrong usage. Enter ./105torus -h to see usage\n");
    }
    return 0;
}