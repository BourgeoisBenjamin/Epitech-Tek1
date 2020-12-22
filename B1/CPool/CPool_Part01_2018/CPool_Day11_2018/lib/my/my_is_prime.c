/*
** EPITECH PROJECT, 2018
** my_is_prime.c
** File description:
** Task06 of Pool Day05
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < 2) {
        return 0;
    }
    while (i < ((nb / 2) + 1)) {
        if (nb % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}
