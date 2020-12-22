/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** options.c
*/

#include <intersection.h>

int options(int argc, char **argv)
{

    if (check_arg(argc, argv) == 84)
        return 84;

    switch (atoi(argv[1]))
    {
        case 1:
            printf("Sphere of radius %i\n", atoi(argv[8]));
            printf("Line passing through the point (%i, %i, %i) and parallel to the vector (%i, %i, %i)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
            sphere(argv);
            break;
        case 2:
            printf("Cylinder of radius %i\n", atoi(argv[8]));
            printf("Line passing through the point (%i, %i, %i) and parallel to the vector (%i, %i, %i)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
            cylinder(argv);
            break;
        case 3:
            printf("Cone with a %i degree angle\n", atoi(argv[8]));
            printf("Line passing through the point (%i, %i, %i) and parallel to the vector (%i, %i, %i)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
            cone(argv);
            break;
    }

    return 0;
}
