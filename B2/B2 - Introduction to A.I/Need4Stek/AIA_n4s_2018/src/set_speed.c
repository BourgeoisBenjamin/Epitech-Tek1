/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** set_speed
*/

#include "n4s.h"

char **set_speed(char **info)
{
    float dist = 0;
    float vitesse = 0;
    char vitesse_to_send[4] = {0, 0, 0, 0};

    if (get_size_array(info) < 15)
        return (NULL);
    dist = atof(info[MIDDLE]);
    free_array(info);
    vitesse = (dist / 10000) * 5;
    vitesse = (vitesse > 1) ? 1 : vitesse;
    gcvt(vitesse, 3, vitesse_to_send);
    if (dist < 200) {
        free_array(send_command("WHEELS_DIR:0"));
        my_printf("CAR_BACKWARDS:");
    } else
        my_printf("CAR_FORWARD:");
    return (send_command(vitesse_to_send));
}
