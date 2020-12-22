/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_button
*/

#include <defender.h>

t_button *create_button(sfVector2f position, sfVector2f size, char *sprite,
void *callback)
{
    t_button *new_button = malloc(sizeof(t_button));
    if (new_button == NULL)
        return NULL;
    new_button->texture = sfTexture_createFromFile(sprite, NULL);
    new_button->rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(new_button->rect, position);
    sfRectangleShape_setSize(new_button->rect, size);
    sfRectangleShape_setTexture(new_button->rect, new_button->texture, sfFalse);
    new_button->callback = callback;
    new_button->next = NULL;
    return new_button;
}
