/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** get_nb_ants
*/

#include <lemin.h>

int get_nb_ants(void)
{
    char *buffer = NULL;
    int nb_ants = 0;
    if ((buffer = get_next_line(0)) == NULL) {
        free(buffer);
        return (-1);
    }
    while (buffer[0] == '#') {
        free(buffer);
        buffer = get_next_line(0);
        if (buffer == NULL)
            return (-1);
    }
    if (!my_str_is_num(buffer) || (nb_ants = my_getnbr(buffer)) <= 0) {
        free(buffer);
        return (-1);
    }
    my_printf("%s\n%i\n", NB_ANTS, nb_ants);
    free(buffer);
    return (nb_ants);
}
