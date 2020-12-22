/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** main architect
*/

#include <102architect.h>

int architect(int argc, char **argv)
{
    double point[3] = {atof(argv[1]), atof(argv[2]), 1};
    
    options(argc, argv, point);

    printf("(%s, %s) => (%.2f, %.2f)\n", argv[1], argv[2], point[0], point[1]);
    
    return 0;
}
