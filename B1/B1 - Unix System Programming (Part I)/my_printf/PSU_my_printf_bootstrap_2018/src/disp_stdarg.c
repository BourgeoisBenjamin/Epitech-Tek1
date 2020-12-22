/*
** EPITECH PROJECT, 2018
** Bootstrap - My_printf
** File description:
** disp_stdarg
*/

#include <stdarg.h>

int my_put_nbr(int nb);

char my_putchar(char c);

char *my_putstr(char const *str);

int disp_stdarg(char *s, ...)
{
    va_list vl;
    int j = 0;

    va_start(vl, s);

    while (s[j] != '\0') {
        if (s[j] == 'i')
            my_put_nbr(va_arg(vl, int));
        else if (s[j] == 'c')
            my_putchar(va_arg(vl, int));
        else if (s[j] == 's')
            my_putstr(va_arg(vl, char *));
        else
            return 84;
        my_putchar('\n');
        j++;
    }
    va_end(vl);
    return 0;
}
