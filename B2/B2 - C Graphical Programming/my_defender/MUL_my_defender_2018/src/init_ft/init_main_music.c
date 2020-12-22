/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_main_music
*/

#include "defender.h"

void init_main_music(t_game *game)
{
    game->musics = NULL;
    t_music *background_music = create_music("rsc/background.ogg",
    50, 1, BACK);
    t_music *click_effect = create_music("rsc/click.ogg", 100, 0, EFFECT);
    game->musics = add_music(game->musics, background_music);
    game->musics = add_music(game->musics, click_effect);
    sfMusic_play(game->musics->music);
}
