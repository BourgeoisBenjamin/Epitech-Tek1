/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** update_damage_player
*/

#include "rpg.h"

void update_damage_player(t_player *player)
{
    player->attrib->damage = player->attrib->constitution +
    player->attrib->strenght + player->attrib->dexterity;
}
