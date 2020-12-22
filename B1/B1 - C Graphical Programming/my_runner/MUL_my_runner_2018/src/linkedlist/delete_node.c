/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** delete_node
*/

#include <runner.h>

void delete_inside_node(t_game_object *object)
{
    sfSprite_destroy(object->sprite);
    sfTexture_destroy(object->texture);
    if (object->music != NULL)
        sfMusic_destroy(object->music);
    if (object->text != NULL)
        sfText_destroy(object->text);
    if (object->clock != NULL)
        sfClock_destroy(object->clock);
}

void delete_node(t_list *list)
{
    if (list->start != NULL) {
        t_game_object *to_delete = list->start;
        list->start = list->start->next;
        delete_inside_node(to_delete);
        free(to_delete);
    }
    list->len--;
}