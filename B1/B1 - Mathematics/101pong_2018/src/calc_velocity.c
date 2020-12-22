/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** calc_velocity.c
*/

#include <pong.h>

t_coordonnees calc_velocity(t_coordonnees pt1, t_coordonnees pt2)
{
    t_coordonnees v_vitesse;

    v_vitesse.x = pt2.x - pt1.x;
    v_vitesse.y = pt2.y - pt1.y;
    v_vitesse.z = pt2.z - pt1.z;

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", v_vitesse.x, v_vitesse.y, v_vitesse.z);

    return v_vitesse;
}
