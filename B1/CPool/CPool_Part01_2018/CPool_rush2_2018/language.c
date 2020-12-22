/*
** EPITECH PROJECT, 2018
** what_language.c
** File description:
** what_language for rush2
*/

void what_language(char *str, int alpha)
{
    int freq = 0;
    int tab[6] = {'e', 'a', 'n', 'o', 'h', 't'};
    int j = 0;

    my_strlowcase(str);
    for (int i = 0; i < 6 ; i++) {
        for (j = 0; str[j] != '\0'; j++) {
            if (tab[i] == str[j])
                freq = freq + 1;
        }
        j = 0;
    }
    freq = (100 * freq / alpha);
    if (freq < 43) {
        my_putstr("=> French");
    }
}
