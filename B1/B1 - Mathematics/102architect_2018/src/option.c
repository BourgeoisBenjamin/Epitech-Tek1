/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** sort_options.c
*/

#include <102architect.h>

int options(int argc, char **argv, double point[3])
{
    int i = 3;
    double matrice_translation[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    double matrice_scaling[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    double matrice_rotation[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    double matrice_symmetry[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    check_arg(argc, argv);

    while (i < argc) {
        if (argv[i][0] == '-' && argv[i][1] == 't') {
            translation(argv, point, matrice_translation, i);
            i = i + 3;
        } else if (argv[i][0] == '-' && argv[i][1] == 'z') {
            scaling(argv, point, matrice_scaling, i);
            i = i + 3;
        } else if (argv[i][0] == '-' && argv[i][1] == 'r') {
            rotation(argv, point, matrice_rotation, i);
            i = i + 2;
        } else if (argv[i][0] == '-' && argv[i][1] == 's') {
            symmetry(argv, point, matrice_symmetry, i);
            i = i + 2;
        }
    }

    calcul_final_matrice(matrice_translation, matrice_scaling, matrice_rotation, matrice_symmetry);

    return 0;
}
