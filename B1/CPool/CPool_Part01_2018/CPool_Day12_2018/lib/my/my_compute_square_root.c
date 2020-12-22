/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** Task05 of Pool Day 05
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    while (i * i != nb) {
        if (i < ((nb / 2) + 1)) {
            i++;
        } else {
            return 0;
        }
    }
    return i;
}
