/*
** EPITECH PROJECT, 2019
** LINGO
** File description:
** parse_file
*/

#include "lingo.h"

int open_file(int argc, char **argv)
{
    int fd = -1;

    if (argc != 2)
        return (-1);
    if ((fd = open(argv[1], O_DIRECTORY) != -1)) {
        close(fd);
        return (-1);
    }
    if ((fd = open(argv[1], O_RDONLY)) == -1)
        return (-1);
    return (fd);
}

char **add_word(char **tab, int i, int fd, char *line)
{
    tab = realloc(tab, (i + 1) * sizeof(char *));
    if (tab == NULL) {
        close(fd);
        free(line);
        return (NULL);
    }
    tab[i - 1] = line;
    tab[i] = NULL;
    return (tab);
}

char **get_file(int argc, char **argv)
{
    char **tab = NULL;
    char *line = NULL;
    int i = 1;
    int fd = open_file(argc, argv);

    if (fd == -1)
        return (NULL);
    while ((line = get_next_line(fd)) != NULL) {
        if (line[0] == '\0') {
            free(line);
            continue;
        }
        if ((tab = add_word(tab, i, fd, line)) == NULL)
            return (NULL);
        i++;
    }
    if (tab == NULL)
        return (NULL);
    close(fd);
    return (tab);
}
