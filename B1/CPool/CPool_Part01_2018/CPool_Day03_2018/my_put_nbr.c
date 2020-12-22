/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** Task07 of Pool Day03
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int digits = 0;

    if (nb < -2147483647) {
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(8 + 48);
    } else {
        if (nb < 0) {
            my_putchar('-');
            nb = -nb;
        }
        if (nb < 10) {
            my_putchar(nb + 48);
        }
        else if (nb > 9) {
            my_put_nbr(nb / 10);
            digits = nb % 10;
            my_putchar(digits + 48);
        }
    }
}
