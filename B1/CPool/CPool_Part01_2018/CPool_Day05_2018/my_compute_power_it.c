/*
** EPITECH PROJECT, 2018
** my_compute_power_it.c
** File description:
** Task03 of Pool Day05
*/

int my_compute_power_it(int nb, int p)
{
    int i = 0;
    int result = 1;

    if (p == 0) {
        return 1;
    } else  if (p < 0 || nb > (2147483647 / p)) {
        return 0;
    } else {
        while (i < p) {
            result = result * nb;
            i++;
        }
        return result;
    }
}
