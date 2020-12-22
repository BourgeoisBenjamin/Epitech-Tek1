/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** usage function
*/

#include <intersection.h>

int display_usage(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            printf("USAGE\n");
            printf("    ./104intersection opt xp yp zp xv yv zv p\n\n");
            printf("DESCRIPTION\n");
            printf("    opt             surface option: 1 for sphere, 2 for cylinder, 3 for a cone\n");
            printf("    (xp, yp, zp)    coordinates of a point by which the light ray passes through\n");
            printf("    (xv, yv, zv)    coordinates of a vector parallel to the light ray\n");
            printf("    p               parameter: radius of the sphere, radius of the cylinder, or angle formed by the cone and the Z-axis\n");
        } else {
            printf("Wrong usage. Enter ./104intersection -h to see usage\n");
        }
    } else {
        printf("Wrong usage. Enter ./104intersection -h to see usage\n");
    }
    return 0;
}

int check_arg(int argc, char **argv)
{
    int i = 2;

    if (1 > atoi(argv[1]) || atoi(argv[1]) > 3) {
        printf("Wrong usage. Bad argument Enter ./104intersection -h to see usage\n");
        return 84;
    }

    if (atoi(argv[8]) < 0 || atoi(argv[8]) > 90) {
        printf("Wrong usage. Bad argument Enter ./104intersection -h to see usage\n");
        return 84;
    }

    while (i < argc) {
        if (!(my_str_isnum(argv[i]))) {
            printf("Wrong usage. Bad argument Enter ./104intersection -h to see usage\n");
            return 84;
        } else {
            i++;
        }
    }

    return 0;
}

/*
int check_number(char *nb1, char *nb2, int min, int argc)
{
    if (argc < min) {
        printf("Wrong usage. Enter ./104architect -h to see usage\n");
        exit(84);
    }
    if (my_str_isnum(nb1) && my_str_isnum(nb2))
        return 0;
    else {
        printf("Wrong usage. Enter ./104architect -h to see usage\n");
        exit(84);
    }
}
*/