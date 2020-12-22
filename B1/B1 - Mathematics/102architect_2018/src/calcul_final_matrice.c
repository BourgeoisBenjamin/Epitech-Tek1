/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** calcul_final_matrice.c
*/

#include <102architect.h>

int calcul_final_matrice(double matrice_translation[3][3], double matrice_scaling[3][3], double matrice_rotation[3][3], double matrice_symmetry[3][3])
{
    double result[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    double result2[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    double result3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int i;
    int j;
    int k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                result[i][j] += matrice_symmetry[i][k] * matrice_rotation[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                result2[i][j] += result[i][k] * matrice_scaling[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                result3[i][j] += result2[i][k] * matrice_translation[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (-0.005 < result3[i][j] && result3[i][j] < 0)
            result3[i][j] = abs(result3[i][j]);
        }
    }
    print_result_matrice(result3);

    return 0;
}

int print_result_matrice(double result[3][3])
{
    printf("%.2f   ", result[0][0]);
    printf("%.2f  ", result[0][1]);
    printf("%.2f\n", result[0][2]);
    printf("%.2f   ", result[1][0]);
    printf("%.2f   ", result[1][1]);
    printf("%.2f\n", result[1][2]);
    printf("%.2f   ", result[2][0]);
    printf("%.2f   ", result[2][1]);
    printf("%.2f\n", result[2][2]);

    return 0;
}