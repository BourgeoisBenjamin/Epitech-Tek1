/*
** EPITECH PROJECT, 2018
** Rush2
** File description:
** Rush2
*/

#include <unistd.h>
#include <my.h>

int my_strlen_alpha(char const *str)
{
    int n = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122)
            n++;
        i++;
    }
    return (n);
}

int alpha_count(int counts, int n, char *str, char **dest)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_strlowcase(dest[n]);
        if (str[i] == dest[n][0])
            counts++;
    }
    return counts;
}

char **my_writi(char **dest, int counts, int alpha, int n)
{
    int g;

    my_putchar(':');
    my_put_nbr(counts);
    g = (10000 * counts / alpha);
    my_putstr(" (");
    my_put_nbr(g / 100);
    my_putchar('.');
    my_put_nbr(g % 100);
    if (g % 100 == 0)
        my_putchar('0');
    my_putstr("%)");
    my_putchar('\n');
    return dest;
}

int rush2(char *str, char **dest)
{
    int counts = 0;
    int alpha;

    my_strlowcase(str);
    alpha = my_strlen_alpha(str);
    for (int n = 2; dest[n] != NULL; n++) {
        my_putchar(dest[n][0]);
        counts = alpha_count(counts, n, str, dest);
        my_writi(dest, counts, alpha, n);
        counts = 0;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 3) {
        my_puterror("media write error\n");
        return 84;
    }
    rush2(argv[1], argv);
    return 0;
}
