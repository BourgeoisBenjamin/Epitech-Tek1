/*
** EPITECH PROJECT, 2018
** my_print_comb.c
** File description:
** Task05 of Pool Day03
*/

void putchar_number(int u, int d, int c)
{
    if (u < c || d < c || d > u || c == d || c == u || d == u) {
        return;
    } else {
        my_putchar(c);
        my_putchar(d);
        my_putchar(u);
        if (c < '7') {
            my_putchar(44);
            my_putchar(32);
        }
    }
}

int my_print_comb(void)
{
    int u = '0';
    int d = '0';
    int c = '0';

    while (c <= '9') {
        while (d <= '9') {
            while (u <= '9') {
                putchar_number(u, d, c);
                u++;
            }
        u = '0';
        d++;
        }
    d = '0';
    c++;
    }
}
