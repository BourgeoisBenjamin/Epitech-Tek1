/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** draw_npc
*/

#include "rpg.h"

void draw_npc(sfRenderWindow *window, t_npc *list)
{
    for (t_npc *npc = list; npc; npc = npc->next) {
        sfSprite_setPosition(npc->sprite, npc->position);
        sfRenderWindow_drawSprite(window, npc->sprite, NULL);
    }
}
