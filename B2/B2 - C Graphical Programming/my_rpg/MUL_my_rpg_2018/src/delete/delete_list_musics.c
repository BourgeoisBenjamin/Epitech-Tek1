/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_list_musics
*/

#include "rpg.h"

void delete_list_musics(t_music *list)
{
    t_music *current = list;
    t_music *next = NULL;
    if (list == NULL)
        return;

    while (current != NULL) {
        if (current->music)
            sfMusic_destroy(current->music);
        next = current->next;
        free(current);
        current = next;
    }
}
