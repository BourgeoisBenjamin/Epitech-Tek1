/*
** EPITECH PROJECT, 2018
** my_print_comb2.c
** File description:
** Task 06 of Pool Day03
*/

void my_putchar(char c);

int convert_numbers2(int nb)
{
    char d = 0;
    char u = 0;

    d = (nb / 10) + 48;
    u = (nb % 10) + 48;

    my_putchar(d);
    my_putchar(u);
}

int display_numbers(int i, int j)
{
    if (i < j)
    {
        convert_numbers2(i);
        my_putchar(32);
        convert_numbers2(j);
        if (i != 98 || j != 99) {
            my_putchar(44);
            my_putchar(32);
        }
    }
}

int my_print_comb2(void)
{
    int i = 0;
    int j = 0;

    while (i < 99) {
        while (j < 100) {
            display_numbers(i, j);
            j++;
        }
    j = 0;
    i++;
    }
}