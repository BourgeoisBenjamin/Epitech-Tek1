/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** header
*/

#ifndef N4S_H
#define N4S_H

#include "my.h"
#include <stdio.h>
#include <string.h>

enum data_type
{
    LEFT,
    LEFT1,
    LEFT2,
    LEFT3,
    LEFT4,
    LEFT5,
    LEFT6,
    LEFT7,
    LEFT8,
    LEFT9,
    LEFT10,
    LEFT11,
    LEFT12,
    LEFT13,
    LEFT14,
    MIDDLE,
    MIDDLE2,
    RIGHT14,
    RIGHT13,
    RIGHT12,
    RIGHT11,
    RIGHT10,
    RIGHT9,
    RIGHT8,
    RIGHT7,
    RIGHT6,
    RIGHT5,
    RIGHT4,
    RIGHT3,
    RIGHT2,
    RIGHT1,
    RIGHT,
};

int ai(void);
char **get_return_command(void);
char **send_command(char *str);
int start_simulation(void);
int stop_simulation(int ret, char **info);
int is_end(char **tab);
char **set_speed(char **info);
char **set_dir(char **info);
int is_end2(char **tab);

#endif
