/*
** EPITECH PROJECT, 2018
** anagram
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
