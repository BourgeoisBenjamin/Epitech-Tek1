/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** usage function
*/

#include <102architect.h>

int display_usage(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            printf("USAGE\n");
            printf("   ./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...\n\n");
            printf("DESCRIPTION\n");
            printf("   x     abscissa of the original point\n");
            printf("   y     ordinate of the original point\n\n");
            printf("   transfo arg1 [arg2]\n");
            printf("   -t i j      translation along vector (i, j)\n");
            printf("   -z m n      scaling by factors m (x-axis) and n (y-axis)\n");
            printf("   -r d        rotation centered in 0 by a d degree angle\n");
            printf("   -s d        reflection over the axis passing through 0 with an inclination\n               angle of d degrees\n");
        } else {
            printf("Wrong usage. Enter ./102architect -h to see usage\n");
        }
    } else {
        printf("Wrong usage. Enter ./102architect -h to see usage\n");
    }
    return 0;
}

int check_number(char *nb1, char *nb2, int min, int argc)
{
    if (argc < min) {
        printf("Wrong usage. Enter ./102architect -h to see usage\n");
        exit(84);
    }
    if (my_str_isnum(nb1) && my_str_isnum(nb2))
        return 0;
    else {
        printf("Wrong usage. Enter ./102architect -h to see usage\n");
        exit(84);
    }
}

int check_arg(int argc, char **argv)
{
    int i = 3;

    if (!(my_str_isnum(argv[1]) && my_str_isnum(argv[2]))) {
        printf("Wrong usage. Enter ./102architect -h to see usage\n");
        exit(84);
    }

    while (i < argc) {
        if (argv[i][0] == '-' && argv[i][1] == 't') {
            check_number(argv[i + 1], argv[i + 2], 3, argc - i);
            i = i + 3;
        } else if (argv[i][0] == '-' && argv[i][1] == 'z') {
            check_number(argv[i + 1], argv[i + 2], 3, argc - i);
            i = i + 3;
        } else if (argv[i][0] == '-' && argv[i][1] == 'r') {
            check_number(argv[i + 1], "0", 2, argc - i);
            i = i + 2;
        } else if (argv[i][0] == '-' && argv[i][1] == 's') {
            check_number(argv[i + 1], "0", 2, argc - i);
            i = i + 2;
        } else {
            printf("Wrong usage. Enter ./102architect -h to see usage\n");
            exit(84);
        }
    }
    return 0;
}