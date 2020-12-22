/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** torus
*/

#include "torus.h"

int bisection(char **argv)
{
    double a0 = atof(argv[2]);
    double a1 = atof(argv[3]);
    double a2 = atof(argv[4]);
    double a3 = atof(argv[5]);
    double a4 = atof(argv[6]);
    double x1 = 0;
    double x2 = 1;
    double pre = atof(argv[7]);

    double m = 0;
    double fm1 = 0;
    double fm2 = 0;

    for (int i = 0; i < 300; i++) {
        if (round(x1 * pow(10, pre)) == round(x2 * pow(10, pre)))
            return 0;
        m = (x1 + x2) / 2;
        printf("x = %g\n", m);
        fm1 = (a4 * pow(m, 4)) + (a3 * pow(m, 3)) + (a2 * pow(m, 2)) + (a1 * m) + a0;
        fm2 = ((a4 * pow(x1, 4)) + (a3 * pow(x1, 3)) + (a2 * pow(x1, 2)) + (a1 * x1) + a0);
        if (fm1 * fm2 < 0)
            x2 = m;
        else
            x1 = m;
    }
    printf("Number of iterations too high\n");
    return 0;
}

int torus(char **argv)
{
    int return_v = 0;

    if (check_arg(argv))
        return 84;

    switch (atoi(argv[1]))
    {
        case 1:
            return_v = bisection(argv);
            break;
        case 2:
            //return_v = newton(argv);
            break;
        case 3:
            //return_v = secant(argv);
            break;
    }
    return return_v;
}