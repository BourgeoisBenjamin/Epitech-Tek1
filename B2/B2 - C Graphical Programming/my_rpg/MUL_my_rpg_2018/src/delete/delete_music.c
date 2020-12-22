/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_music
*/

#include "rpg.h"

void delete_inside_music(t_music *to_delete)
{
    if (to_delete->music)
        sfMusic_destroy(to_delete->music);
    free(to_delete);
}

t_music *delete_music(t_music *list_music, t_music *to_delete)
{
    t_music *music = list_music;

    if (music == to_delete) {
        music = music->next;
        delete_inside_music(to_delete);
        return (music);
    }

    while (music->next != to_delete && music->next != NULL) {
        music = music->next;
    }

    if (music->next == NULL && music != to_delete)
        return (list_music);

    music->next = music->next->next;
    delete_inside_music(to_delete);
    return (list_music);
}
