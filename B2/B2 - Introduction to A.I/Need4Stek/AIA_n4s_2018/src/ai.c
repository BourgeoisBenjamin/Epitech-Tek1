/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** ai
*/

#include "n4s.h"

int ai(void)
{
    char **info = NULL;

    if (start_simulation() == -1)
        return (84);
    while (1) {
        if ((info = send_command("GET_INFO_LIDAR")) == NULL)
            return (stop_simulation(84, info));
        if (is_end(info))
            break;
        if ((info = set_speed(info)) == NULL)
            return (stop_simulation(0, info));
        free_array(info);
        if ((info = send_command("GET_INFO_LIDAR")) == NULL)
            return (stop_simulation(84, info));
        if (is_end(info))
            break;
        if ((info = set_dir(info)) == NULL)
            return (stop_simulation(0, info));
    }
    return (stop_simulation(0, info));
}
