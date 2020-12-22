/*
** EPITECH PROJECT, 2018
** my_putnbr_base.c
** File description:
** Task 15 of Pool Day06
*/

int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base)
{
    int lenght_base = my_strlen(base);

    if (nbr < -2147483647) {
        nbr = -nbr;
        my_putchar('-');
    }
    if (nbr == 0) {
        return 0;
    } else {
        my_putnbr_base(nbr / lenght_base, base);
    }
    my_putchar(base[nbr % lenght_base]);
    return 0;
}
