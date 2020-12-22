/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** check
*/

#include <pushswap.h>

int check_arg(char **argv)
{
    int i = 1;
    int j = 0;

    while (argv[i]) {
        while (argv[i][j]) {
            if (argv[i][i] == '-' || argv[i][j] == '+')
                j++;
            if (my_isdigit(argv[i][j]) == 0) {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}