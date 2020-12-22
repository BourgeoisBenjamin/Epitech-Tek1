/*
** EPITECH PROJECT, 2019
** FAZZBIZZ
** File description:
** fazzbizz
*/

#include "fazzbizz.h"

int fazzbizz(int nb1, int nb2)
{
    for (int i = nb1; i <= nb2; i++) {
        if (i % 9 == 0 && i % 10 == 0) {
            printf("FazzBizz\n");
            continue;
        }
        if (i % 9 == 0)
            printf("Bizz\n");
        else if (i % 10 == 0)
            printf("Fazz\n");
        else
            printf("%i\n", i);
    }
    return 0;
}
