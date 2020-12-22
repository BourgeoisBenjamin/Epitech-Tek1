/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_tmp_fight_scene
*/

#include "rpg.h"

t_game_object *delete_tmp_obj_fight_scene(t_game_object *list)
{
    int i = 1;
    t_game_object *current = list;
    t_game_object *next = NULL;
    if (list == NULL)
        return (list);

    while (current != NULL) {
        if (i > 6) {
            next = current->next;
            list = delete_obj(list, current);
            current = next;
        } else {
            current = current->next;
        }
        i++;
    }
    return (list);
}

t_button *delete_tmp_button_fight_scene(t_button *list)
{
    int i = 1;
    t_button *current = list;
    t_button *next = NULL;
    if (list == NULL)
        return (list);

    while (current != NULL) {
        if (i > 3) {
            next = current->next;
            list = delete_button(list, current);
            current = next;
        } else {
            current = current->next;
        }
        i++;
    }
    return (list);
}

t_text *delete_tmp_text_fight_scene(t_text *list)
{
    int i = 1;
    t_text *current = list;
    t_text *next = NULL;
    if (list == NULL)
        return (list);

    while (current != NULL) {
        if (i > 2) {
            next = current->next;
            list = delete_text(list, current);
            current = next;
        } else {
            current = current->next;
        }
        i++;
    }
    return (list);
}

void delete_tmp_fight_scene(t_scenes *fight_scene)
{
    fight_scene->objs = delete_tmp_obj_fight_scene(fight_scene->objs);
    fight_scene->buttons = delete_tmp_button_fight_scene(fight_scene->buttons);
    fight_scene->texts = delete_tmp_text_fight_scene(fight_scene->texts);
}
