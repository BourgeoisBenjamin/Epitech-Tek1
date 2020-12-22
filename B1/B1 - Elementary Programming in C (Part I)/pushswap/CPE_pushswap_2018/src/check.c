/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** check
*/

#include <pushswap.h>

int check_arg(char **argv)
{
    for (int i = 0; argv[i]; i++) {
        for (int j = 0; argv[i][j]; j++) {
            if (argv[i][i] == '-' || argv[i][j] == '+')
                j++;
            if (my_isdigit(argv[i][j]) == 0)
                return 0;
        }
    }
    return 1;
}