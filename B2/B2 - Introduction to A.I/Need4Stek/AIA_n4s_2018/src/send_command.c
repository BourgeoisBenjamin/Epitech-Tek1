/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** send_commmand
*/

#include "n4s.h"

char **command_ok(void)
{
    char **info = NULL;
    if ((info = get_return_command()) == NULL)
        return (NULL);
    if (my_strcmp(info[1], "KO") == 0) {
        my_printe("Error : %s\n", info[2]);
        free_array(info);
        return (NULL);
    }
    return (info);
}

char **send_command(char *str)
{
    my_printf("%s\n", str);
    return (command_ok());
}
