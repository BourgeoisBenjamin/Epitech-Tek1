/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** set_dir
*/

#include "n4s.h"

char **set_dir(char **info)
{
    char dir_to_send[7] = {0, 0, 0, 0, 0, 0, 0};
    float dist = 0;
    int left = 0;
    int right = 0;
    float dir = 0;

    if (get_size_array(info) < 35)
        return (NULL);
    dist = atof(info[15]);
    left = atof(info[3]);
    right = atof(info[34]);
    dir = 80 / dist;
    free_array(info);
    if ((left - right) < 0)
        dir = -dir;
    gcvt(dir, 6, dir_to_send);
    my_printf("WHEELS_DIR:");
    return (send_command(dir_to_send));
}
