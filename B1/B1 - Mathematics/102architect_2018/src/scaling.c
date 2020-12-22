/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** scaling
*/

#include <102architect.h>

int scaling(char **argv, double point[3], double matrice_scaling[3][3], int i)
{
    double sx = atof(argv[i + 1]);
    double sy = atof(argv[i + 2]);

    point[0] = point[0] * sx;
    point[1] = point[1] * sy;

    matrice_scaling[0][0] = sx;
    matrice_scaling[1][1] = sy;

    printf("Scaling by factors %.0f and %.0f\n", sx, sy);

    return 0;
}