/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** get_elapsed_time
*/

#include "rpg.h"

int get_elapsed_time(sfClock *clock)
{
    float seconds = 0;
    sfTime time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    return (seconds);
}
