/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** calc_coord_n.c
*/

#include <pong.h>

int calc_coord_n(t_coordonnees pt2, t_coordonnees v_vitesse, int n)
{
    t_coordonnees pt_n;

    pt_n.x = pt2.x + (n * v_vitesse.x);
    pt_n.y = pt2.y + (n * v_vitesse.y);
    pt_n.z = pt2.z + (n * v_vitesse.z);

    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)\n", pt_n.x, pt_n.y, pt_n.z);

    return 0;
}
