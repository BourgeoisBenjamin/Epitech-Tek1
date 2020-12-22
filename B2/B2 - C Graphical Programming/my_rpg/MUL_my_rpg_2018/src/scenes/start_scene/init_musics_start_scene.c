/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_musics_start_scene
*/

#include "rpg.h"

t_music *create_background_music_start_scene(t_music *list_music)
{
    t_music *background = create_music("ressources/soundtrack/celestial.ogg",
    50, 1, BACKGROUND_M);

    if (background == NULL)
        return (NULL);
    if ((list_music = add_music(list_music, background)) == NULL)
        return (NULL);
    return (list_music);
}

t_music *init_musics_start_scene(void)
{
    t_music *list_music = NULL;
    if ((list_music = create_background_music_start_scene(list_music)) == NULL)
        return (NULL);
    return (list_music);
}
