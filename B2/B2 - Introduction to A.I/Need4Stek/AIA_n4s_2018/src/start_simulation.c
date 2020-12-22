/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** start_simulation
*/

#include "n4s.h"

int start_simulation(void)
{
    char **output_array = NULL;
    if ((output_array = send_command("START_SIMULATION")) == NULL)
        return (-1);
    if (my_strcmp(output_array[1], "KO") == 0) {
        my_printe("Error : %s\n", output_array[2]);
        free_array(output_array);
        return (-1);
    }
    free_array(output_array);
    return (0);
}
