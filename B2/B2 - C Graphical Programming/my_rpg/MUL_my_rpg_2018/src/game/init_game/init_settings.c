/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_settings
*/

#include "rpg.h"

t_settings *init_settings(void)
{
    t_settings *settings = malloc(sizeof(t_settings));

    if (settings == NULL)
        return (NULL);

    settings->sound_vol = 50;
    settings->music_vol = 70;

    return (settings);
}
