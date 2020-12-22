/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** all_check.c
*/

#include <bsq.h>

void test_argc(int argc)
{
    if (argc != 2) {
        my_putstr("USAGE : ./bsq [map]\n");
        exit(84);
    }
}
