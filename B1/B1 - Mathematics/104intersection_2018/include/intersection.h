/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** header
*/

#ifndef _INTERSECTION_
#define _INTERSECTION_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* USAGE */
int display_usage(int argc, char **argv);
int check_arg(int argc, char **argv);

/* UTILS */
int my_str_isnum(char const *str);

/* INTERSECTION */
int intersection(int argc, char **argv);

/* OPTIONS */
int options(int argc, char **argv);

/* SPHERE */
int sphere(char **argv);

/* CYLINDER */
int cylinder(char **argv);

/* CONE */
int cone(char **argv);


#endif
