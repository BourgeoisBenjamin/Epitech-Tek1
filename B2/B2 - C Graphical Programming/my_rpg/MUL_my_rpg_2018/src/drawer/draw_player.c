/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** draw_player
*/

#include "rpg.h"

void draw_player(sfRenderWindow *window, t_player *player,
enum scenes current_scenes)
{
    if (current_scenes >= GAME1 && current_scenes <= GAME2) {
        sfSprite_setPosition(player->sprite, player->position);
        sfRenderWindow_drawSprite(window, player->sprite, NULL);
    }
}
