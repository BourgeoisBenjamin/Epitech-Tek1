/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** rotation.c
*/

#include <102architect.h>

int rotation(char **argv, double point[3], double matrice_rotation[3][3], int i)
{
    double r = atof(argv[i + 1]);
    double tempx = point[0];

    r = (r * M_PI) / 180;

    point[0] = cos(r) * tempx - sin(r) * point[1];
    point[1] = sin(r) * tempx + cos(r) * point[1];

    matrice_rotation[0][0] = cos(r);
    matrice_rotation[0][1] = -sin(r);
    matrice_rotation[1][0] = sin(r);
    matrice_rotation[1][1] = cos(r);

    printf("Rotation by a %s degree angle\n", argv[i + 1]);

    return 0;
}