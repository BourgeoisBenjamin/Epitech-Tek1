/*
** EPITECH PROJECT, 2018
** my_isneg.c
** File description:
** Task04
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    }
    else {
        my_putchar(80);
    }
}
