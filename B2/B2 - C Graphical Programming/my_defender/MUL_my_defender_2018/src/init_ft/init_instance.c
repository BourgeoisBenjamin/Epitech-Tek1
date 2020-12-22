/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_instance
*/

#include "defender.h"

void init_instance(t_instance *instance)
{
    instance->scene = 0;
    instance->start = 0;
    instance->money = 1000;
    instance->life = 1000;
    instance->score = get_score();
}
