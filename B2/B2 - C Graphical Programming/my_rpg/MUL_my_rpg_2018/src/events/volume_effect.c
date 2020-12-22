/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** volume_effect
*/

#include "rpg.h"

int volume_up_effect_music(t_rpg *game)
{
    game->settings->sound_vol += 10;
    if (game->settings->sound_vol > 100)
        game->settings->sound_vol = 100;
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *ef = game->scenes_array[i]->musics; ef; ef = ef->next) {
            if (ef->type == EFFECT_M)
                sfMusic_setVolume(ef->music, game->settings->sound_vol);
        }
        for (t_button *ef = game->scenes_array[i]->buttons; ef;
        ef = ef->next) {
            sfMusic_setVolume(ef->click_effect, game->settings->sound_vol);
        }
    }
    return (0);
}

int volume_down_effect_music(t_rpg *game)
{
    game->settings->sound_vol -= 10;
    if (game->settings->sound_vol < 0)
        game->settings->sound_vol = 0;
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *ef = game->scenes_array[i]->musics; ef; ef = ef->next) {
            if (ef->type == EFFECT_M)
                sfMusic_setVolume(ef->music, game->settings->sound_vol);
        }
        for (t_button *ef = game->scenes_array[i]->buttons; ef; ef = ef->next) {
            sfMusic_setVolume(ef->click_effect, game->settings->sound_vol);
        }
    }
    return (0);
}

int volume_mute_effect_music(t_rpg *game)
{
    game->settings->sound_vol = 0;
    for (int i = 0; game->scenes_array[i]; i++) {
        for (t_music *ef = game->scenes_array[i]->musics; ef; ef = ef->next) {
            if (ef->type == EFFECT_M)
                sfMusic_setVolume(ef->music, game->settings->sound_vol);
        }
        for (t_button *ef = game->scenes_array[i]->buttons; ef; ef = ef->next) {
            sfMusic_setVolume(ef->click_effect, game->settings->sound_vol);
        }
    }
    return (0);
}
