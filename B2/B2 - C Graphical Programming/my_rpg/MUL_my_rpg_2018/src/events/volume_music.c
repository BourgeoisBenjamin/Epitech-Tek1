/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** volume_music
*/

#include "rpg.h"

int volume_up_main_music(t_rpg *game)
{
    game->settings->music_vol += 10;
    if (game->settings->music_vol > 100)
        game->settings->music_vol = 100;
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *mu = game->scenes_array[i]->musics; mu; mu = mu->next) {
            if (mu->type == BACKGROUND_M)
                sfMusic_setVolume(mu->music, game->settings->music_vol);
        }
    }
    return (0);
}

int volume_down_main_music(t_rpg *game)
{
    game->settings->music_vol -= 10;
    if (game->settings->music_vol < 0)
        game->settings->music_vol = 0;
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *mu = game->scenes_array[i]->musics; mu; mu = mu->next) {
            if (mu->type == BACKGROUND_M)
                sfMusic_setVolume(mu->music, game->settings->music_vol);
        }
    }
    return (0);
}

int volume_mute_main_music(t_rpg *game)
{
    game->settings->music_vol = 0;
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *mu = game->scenes_array[i]->musics; mu; mu = mu->next) {
            if (mu->type == BACKGROUND_M)
                sfMusic_setVolume(mu->music, game->settings->music_vol);
        }
    }
    return (0);
}
