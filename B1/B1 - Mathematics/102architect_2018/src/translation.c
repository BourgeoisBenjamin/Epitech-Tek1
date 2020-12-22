/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** translation
*/

#include <102architect.h>

int translation(char **argv, double point[3], double matrice_translation[3][3], int i)
{
    double vx = atof(argv[i + 1]);
    double vy = atof(argv[i + 2]);

    point[0] = point[0] + vx;
    point[1] = point[1] + vy;

    matrice_translation[0][2] = vx;
    matrice_translation[1][2] = vy;

    printf("Translation along vector (%.0f, %.0f)\n", vx, vy);

    return 0;
}