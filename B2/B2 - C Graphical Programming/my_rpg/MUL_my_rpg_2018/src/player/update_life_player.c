/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** update_life_player
*/

#include "rpg.h"

void update_life_player(t_player *player)
{
    static int nb_pot = 0;
    int actual_nb_pot = 0;

    for (t_game_object *tmp = player->inventory; tmp; tmp = tmp->next)
        actual_nb_pot++;

    if (actual_nb_pot != nb_pot) {
        player->attrib->life -= nb_pot * 25;
        nb_pot = actual_nb_pot;
        player->attrib->life += nb_pot * 25;
    }
}
