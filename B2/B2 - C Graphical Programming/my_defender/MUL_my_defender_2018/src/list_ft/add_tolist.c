/*
** EPITECH PROJECT, 2018
** MY_DEFENDER
** File description:
** add_tolist
*/

#include "defender.h"

t_button *add_button(t_button *list, t_button *to_add)
{
    if (list == NULL)
        return to_add;

    t_button *temp = list;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = to_add;
    return list;
}

t_game_object *add_object(t_game_object *list, t_game_object *to_add)
{
    if (list == NULL)
        return to_add;

    t_game_object *temp = list;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = to_add;
    return list;
}

t_text *add_text(t_text *list, t_text *to_add)
{
    if (list == NULL)
        return to_add;

    t_text *temp = list;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = to_add;
    return list;
}

t_music *add_music(t_music *list, t_music *to_add)
{
    if (list == NULL)
        return to_add;

    t_music *temp = list;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = to_add;
    return list;
}
