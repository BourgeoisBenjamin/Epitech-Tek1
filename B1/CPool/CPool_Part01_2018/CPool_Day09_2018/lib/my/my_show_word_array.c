/*
** EPITECH PROJECT, 2018
** my_show_word_array.c
** File description:
** Task 03 of Pool Day 08
*/

void my_putchar(char c);
int my_putstr(char const *str);

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
