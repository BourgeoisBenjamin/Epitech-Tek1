/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** pong.c
*/

#include <pong.h>

int pong(t_coordonnees pt1, t_coordonnees pt2, int n)
{
    t_coordonnees v_vitesse = calc_velocity(pt1, pt2);
    calc_coord_n(pt2, v_vitesse, n);
    calc_incidence_angle(v_vitesse, pt2, pt1);

    return 0;
}
