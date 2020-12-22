/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** Header
*/

#ifndef ARCHITECT_H
#define ARCHITECT_H

#include <stdio.h>
#include <stdlib.h>
#include <my.h>
#include <math.h>

int translation(char **argv, double point[3], double matrice_translation[3][3], int i);
int architect(int argc, char **argv);
int options(int argc, char **argv, double point[3]);
int display_usage(int argc, char **argv);
int rotation(char **argv, double point[3], double matrice_rotation[3][3], int i);
int symmetry(char **argv, double point[3], double matrice_symmetry[3][3], int i);
int scaling(char **argv, double point[3], double matrice_scaling[3][3], int i);
int print_result_matrice(double result[3][3]);
int calcul_final_matrice(double matrice_translation[3][3], double matrice_scaling[3][3], double matrice_rotation[3][3], double matrice_symmetry[3][3]);
int check_number(char *nb1, char *nb2, int min, int argc);
int check_arg(int argc, char **argv);

#endif