/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** play_music
*/

#include "rpg.h"

void play_music(t_scenes *scene)
{
    for (t_music *temp = scene->musics; temp; temp = temp->next) {
        if (temp->type == BACKGROUND_M
        && sfMusic_getStatus(temp->music) == sfStopped) {
            sfMusic_play(temp->music);
            return;
        }
    }
}
