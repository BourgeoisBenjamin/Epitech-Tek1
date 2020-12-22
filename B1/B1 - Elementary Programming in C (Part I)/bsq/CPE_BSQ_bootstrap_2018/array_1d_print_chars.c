/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** array_1d_print_chars
*/

void my_putchar(char c);

void array_1d_print_chars(char const *arr)
{
    for (int i = 0; arr[i] != '\0'; i++) {
        my_putchar(arr[i]);
        my_putchar('\n');
    }
}
