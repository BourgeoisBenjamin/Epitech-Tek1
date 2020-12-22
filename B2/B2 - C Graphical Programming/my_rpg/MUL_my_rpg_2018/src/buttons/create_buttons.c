/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_button
*/

#include "rpg.h"

t_button *create_button(char *sprite, enum buttons type, void *callback)
{
    t_button *new_button = malloc(sizeof(t_button));
    if (new_button == NULL)
        return (NULL);
    new_button->type = type;
    new_button->offset = 0;
    new_button->max_value = 0;
    new_button->shape = NULL;
    new_button->texture = sfTexture_createFromFile(sprite, NULL);
    new_button->onclick = onclick;
    new_button->onhover = onhover;
    new_button->onnormal = onnormal;
    new_button->callback = callback;
    new_button->click_effect =
    sfMusic_createFromFile("ressources/soundtrack/click.ogg");
    sfMusic_setVolume(new_button->click_effect, 50);
    new_button->next = NULL;

    return (new_button);
}
