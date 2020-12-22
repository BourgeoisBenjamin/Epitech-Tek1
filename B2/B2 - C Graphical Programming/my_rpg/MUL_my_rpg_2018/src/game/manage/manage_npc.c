/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** manage_npc
*/

#include "rpg.h"

void manage_npc(t_npc *list_npc, sfClock *clock)
{
    int seconds = get_elapsed_time(clock);

    for (t_npc *npc = list_npc; npc; npc = npc->next) {
        if (npc->move_every != -1)
            move_npc(npc, seconds);
    }
}
