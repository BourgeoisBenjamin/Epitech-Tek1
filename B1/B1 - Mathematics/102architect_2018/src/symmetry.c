/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** symmetry.c
*/

#include <102architect.h>

int symmetry(char **argv, double point[3], double matrice_symmetry[3][3], int i)
{
    double r = atof(argv[i + 1]);
    double tempx = point[0];

    r = (r * M_PI) / 180;

    point[0] = cos(2*r) * tempx + sin(2*r) * point[1];
    point[1] = sin(2*r) * tempx - cos(2*r) * point[1];

    matrice_symmetry[0][0] = cos(2*r);
    matrice_symmetry[0][1] = sin(2*r);
    matrice_symmetry[1][0] = sin(2*r);
    matrice_symmetry[1][1] = -cos(2*r);
    
    printf("Reflection over an axis with an inclination angle of %s degrees\n", argv[i + 1]);

    return 0;
}