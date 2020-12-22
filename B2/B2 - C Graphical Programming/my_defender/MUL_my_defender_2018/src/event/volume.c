/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** volume
*/

#include "defender.h"

void volume_up(t_game *game)
{
    float volume = sfMusic_getVolume(game->musics->music);
    volume += 10;
    if (volume > 100)
        volume = 100;
    sfMusic_setVolume(game->musics->music, volume);
}

void volume_down(t_game *game)
{
    float volume = sfMusic_getVolume(game->musics->music);
    volume -= 10;
    if (volume < 0)
        volume = 0;
    sfMusic_setVolume(game->musics->music, volume);
}
