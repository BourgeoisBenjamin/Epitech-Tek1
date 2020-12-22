/*
** EPITECH PROJECT, 2018
** Bootstrap - My_printf
** File description:
** Sum_stdarg
*/

#include <stdarg.h>

int my_strlen(char const *str);

int sum_stdarg(int i, int nb, ...)
{
    va_list vl;
    int result = 0;
    int j = 0;

    va_start(vl, nb);

    if (i == 0) {
        while (j < nb) {
            result = result + va_arg(vl, int);
            j++;
        }
    } else if (i == 1) {
        while (j < nb) {
            result = result + my_strlen(va_arg(vl, char *));
            j++;
        }
    } else {
        return 84;
    }
    va_end(vl);
    return result;
}
