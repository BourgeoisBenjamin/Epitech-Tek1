/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_list_npc
*/

#include "rpg.h"

void delete_list_npc(t_npc *list)
{
    t_npc *current = list;
    t_npc *next = NULL;
    if (list == NULL)
        return;

    while (current != NULL) {
        if (current->texture)
            sfTexture_destroy(current->texture);
        if (current->sprite)
            sfSprite_destroy(current->sprite);
        if (current->list_text)
            delete_list_texts(current->list_text);
        next = current->next;
        free(current);
        current = next;
    }
}
