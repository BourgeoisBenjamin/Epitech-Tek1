/*
** EPITECH PROJECT, 2018
** my_print_digits.c
** File description:
** Task03
*/

int my_putchar(char c);

int my_print_digits(void)
{
    for (int i = 48; i < 58; i++)
        my_putchar(i);
}
