/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** pong.h
*/

#ifndef PONG_H
#define PONG_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
    double x;
    double y;
    double z;
}t_coordonnees;

int calc_coord_n(t_coordonnees pt2, t_coordonnees v_vitesse, int n);
t_coordonnees calc_velocity(t_coordonnees pt1, t_coordonnees pt2);
int check_data(int argc, char **argv);
void display_usage(void);
int pong(t_coordonnees pt1, t_coordonnees pt2, int n);
int prepare_struct(char **argv);
int calc_incidence_angle(t_coordonnees v_vitesse, t_coordonnees pt2, t_coordonnees pt1);

#endif
