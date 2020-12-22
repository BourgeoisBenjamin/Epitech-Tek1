/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** Task02
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (int i = 122; i > 96; i--)
        my_putchar(i);
}
