/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_music
*/

#include "rpg.h"

t_music *create_music(char *path, int volume, int loop, enum music type)
{
    t_music *new_music = malloc(sizeof(t_music));
    if (new_music == NULL)
        return (NULL);
    new_music->music = sfMusic_createFromFile(path);
    if (loop)
        sfMusic_setLoop(new_music->music, sfTrue);
    sfMusic_setVolume(new_music->music, volume);
    new_music->type = type;
    new_music->next = NULL;
    return (new_music);
}
