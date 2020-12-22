/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** delete_list_musics
*/

#include "defender.h"

void delete_list_musics(t_music *musics)
{
    t_music *current = musics;
    t_music *next;

    while (current != NULL) {
        if (current->music)
            sfMusic_destroy(current->music);
        next = current->next;
        free(current);
        current = next;
    }
}
