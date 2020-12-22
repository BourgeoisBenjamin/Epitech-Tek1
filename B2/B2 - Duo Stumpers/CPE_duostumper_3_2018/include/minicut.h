/*
** EPITECH PROJECT, 2019
** DUOSTUMPERS
** File description:
** header
*/

#ifndef MINICUT_H
#define MINICUT_H

#include "my.h"
#include <getopt.h>

typedef struct s_opt
{
    char name;
    int activate;
    char *arg;
} t_opt;

int minicut(int argc, char **argv);
void delete_opt(t_opt **opt);
t_opt **get_arg(int argc, char **argv);
int verif_arg(int c, t_opt **opt);
t_opt **init_opt(void);

#endif
