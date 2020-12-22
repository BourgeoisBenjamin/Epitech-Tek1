/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** get_form_tetrimino
*/

#include "tetris.h"

char **extend_form_tetrimino(char **form, char *line)
{
    int size = get_size_array(form);
    char **new_form = malloc(sizeof(char*) * (size + 2));
    if (new_form == NULL) {
        free_array(form);
        return (NULL);
    }
    for (int i = 0; form && form[i]; i++) {
        new_form[i] = form[i];
    }
    new_form[size] = my_strdup(line);
    new_form[size + 1] = NULL;
    free(form);
    return (new_form);
}

int verif_form_size_tetrimino(t_tetriminos *new)
{
    if (!new->form)
        return (-1);
    int nb_rows = 0;
    int max = 0;
    int len = 0;

    for (nb_rows = 0; new->form[nb_rows]; nb_rows++) {
        len = my_strlen(new->form[nb_rows]);
        while (new->form[nb_rows][len - 1] != '*' && len - 1 > -1) {
            len--;
        }
        if (len > max)
            max = len;
    }
    if (nb_rows != new->height || max != new->width)
        return (-1);
    return (0);
}

int verif_form_charac_tetrimino(t_tetriminos *new)
{
    if (!new->form)
        return (-1);

    for (int i = 0; new->form[i]; i++) {
        for (int j = 0; new->form[i][j]; j++) {
            if (new->form[i][j] != ' ' && new->form[i][j] != '*')
                return (-1);
        }
    }
    return (0);
}

void improve_form_tetrimino(char **form)
{
    for (int i = 0; form[i]; i++) {
        for (int j = my_strlen(form[i]) - 1; j > -1; j--) {
            if (form[i][j] != ' ')
                break;
            if (form[i][j] == ' ')
                form[i][j] = '\0';
        }
    }
}

int get_form_tetrimino(t_tetriminos *new, int fd)
{
    char *line = NULL;
    while ((line = get_next_line(fd)) != NULL) {
        if ((new->form = extend_form_tetrimino(new->form, line)) == NULL) {
            free(line);
            return (-1);
        }
        free(line);
    }
    if (!new->form)
        return (-1);
    if (verif_form_charac_tetrimino(new) == -1)
        return (-1);
    if (verif_form_size_tetrimino(new) == -1)
        return (-1);
    return (0);
}
