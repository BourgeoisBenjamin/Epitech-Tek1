/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** fight_in_house
*/

#include "rpg.h"

int fight_in_house(t_rpg *game, t_game_object *obj)
{
    int nb = 1;
    t_quest *tmp;
    t_npc *npc = game->scenes_array[game->scene]->npc;
    (void)obj;
    while (npc != NULL) {
        if (npc->type == SENSEI)
            break;
        npc = npc->next;
    }
    if (game->scene == GAME2) {
        tmp = game->scenes_array[game->scene]->quest;
        while (tmp->finish == true && tmp->next != NULL) {
            nb++;
            tmp = tmp->next;
        }
        if (nb == 4)
            go_fight_scene(game, npc);
    }
    return (0);
}
