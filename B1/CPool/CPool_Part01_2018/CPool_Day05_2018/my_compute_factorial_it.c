/*
** EPITECH PROJECT, 2018
** my_compute_factoriel_rec.c
** File description:
** Task01 of Pool Day05
*/

int my_compute_factorial_it(int nb)
{
    if (0 < nb && nb < 13) {
        int result = 1;
        while (nb > 1) {
            result = result * nb;
            nb--;
        }
        return result;
    } else if (nb == 0) {
        return 1;
    } else {
        return 0;
    }
}
