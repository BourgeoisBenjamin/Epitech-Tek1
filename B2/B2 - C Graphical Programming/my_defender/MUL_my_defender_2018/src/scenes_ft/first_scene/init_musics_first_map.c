/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_musics_first_map
*/

#include "defender.h"

t_music *add_music_fire(void)
{
    t_music *list_music = NULL;
    t_music *music_fire = create_music("rsc/fire.ogg", 100, 0, FIRE);
    list_music = add_music(list_music, music_fire);
    return list_music;
}

t_music *init_musics_first_map(void)
{
    t_music *list_music = add_music_fire();

    return list_music;
}
