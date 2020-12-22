/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** stop_all_music
*/

#include "rpg.h"

int stop_all_music(t_rpg *game)
{
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *mu = game->scenes_array[i]->musics; mu; mu = mu->next) {
            sfMusic_stop(mu->music);
        }
    }
    return (0);
}
