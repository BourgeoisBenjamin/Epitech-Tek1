/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** header
*/

#ifndef BSTETRIS_H
#define BSTETRIS_H

#include "my.h"

typedef struct s_piece
{
    char *name;
    int width;
    int height;
    int color;
    char **form;
    int error;
} t_piece;

#endif
