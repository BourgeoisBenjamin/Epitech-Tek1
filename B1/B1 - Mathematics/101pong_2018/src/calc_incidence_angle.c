/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** calc_incidence_angle.c
*/

#include <pong.h>

int calc_incidence_angle(t_coordonnees v_vitesse, t_coordonnees pt2, t_coordonnees pt1)
{
    float angle = 0;

    if (v_vitesse.z != 0 && ((-pt2.z) / v_vitesse.z >= 0 && pt2.x !=0)) {
        angle = acosf((sqrtf(powf(v_vitesse.x, 2) + powf(v_vitesse.y, 2))) /
                      (sqrtf(powf(v_vitesse.x, 2) + powf(v_vitesse.y, 2) +
                             powf(v_vitesse.z, 2))));
        angle = angle * 180 / M_PI;
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", angle);

    } else {
        if (pt1.z == 0 && pt2.z == 0)
            printf("The incidence angle is:\n0.00 degrees\n");
        else
            printf("The ball won't reach the bat.\n");
    }
    return 0;
}
