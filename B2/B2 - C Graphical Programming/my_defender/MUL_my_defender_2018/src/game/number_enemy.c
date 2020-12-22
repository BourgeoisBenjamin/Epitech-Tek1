/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** game_main
*/

#include "defender.h"

int number_enemy(t_game_object *list_obj)
{
    int nb_enemy = 0;

    for (t_game_object *temp = list_obj; temp; temp = temp->next) {
        if (temp->type == ENEMY)
            nb_enemy++;
    }
    return nb_enemy;
}