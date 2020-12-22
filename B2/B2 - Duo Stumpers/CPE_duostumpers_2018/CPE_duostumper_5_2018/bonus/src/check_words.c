/*
** EPITECH PROJECT, 2019
** LINGO
** File description:
** check_words
*/

int check_line(char *line)
{
    for (int i = 0; line[i]; i++) {
        if (line[i] == ' ')
            return (-1);
        if (line[i] < 'a' || line[i] > 'z')
            return (-1);
    }
    return (0);
}

int check_words(char **tab)
{
    for (int i = 0; tab[i]; i++) {
        if (check_line(tab[i]) == -1)
            return (-1);
    }
    return (0);
}
