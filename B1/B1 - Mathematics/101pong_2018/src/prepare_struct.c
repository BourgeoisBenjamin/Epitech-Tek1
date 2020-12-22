/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** prepare_struct.c
*/

#include <pong.h>

int prepare_struct(char **argv)
{
    t_coordonnees pt1;
    t_coordonnees pt2;

    int n = atoi(argv[7]);

    pt1.x = atof(argv[1]);
    pt1.y = atof(argv[2]);
    pt1.z = atof(argv[3]);
    pt2.x = atof(argv[4]);
    pt2.y = atof(argv[5]);
    pt2.z = atof(argv[6]);

    pong(pt1, pt2, n);

    return 0;
}
