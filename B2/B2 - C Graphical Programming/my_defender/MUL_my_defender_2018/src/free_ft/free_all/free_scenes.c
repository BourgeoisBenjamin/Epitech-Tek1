/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** free_scenes
*/

#include "defender.h"

void free_scenes(t_scenes **scenes_array)
{
    for (int i = 0; scenes_array[i]; i++) {
        delete_list_objs(scenes_array[i]->objs);
        delete_list_buttons(scenes_array[i]->buttons);
        delete_list_texts(scenes_array[i]->texts);
        delete_list_musics(scenes_array[i]->musics);
        free(scenes_array[i]);
    }
    free(scenes_array);
}
