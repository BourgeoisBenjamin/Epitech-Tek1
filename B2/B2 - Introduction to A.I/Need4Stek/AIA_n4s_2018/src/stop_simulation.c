/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** stop_simulation
*/

#include "n4s.h"

int stop_simulation(int ret, char **info)
{
    char **output_array = NULL;
    if (info)
        free_array(info);
    if ((output_array = send_command("STOP_SIMULATION")) == NULL)
        return (84);
    if (my_strcmp(output_array[1], "KO") == 0) {
        my_printe("Error : %s\n", output_array[2]);
        free_array(output_array);
        return (84);
    }
    free_array(output_array);
    return (ret);
}
