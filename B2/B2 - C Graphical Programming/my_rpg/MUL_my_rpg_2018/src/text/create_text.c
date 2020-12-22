/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_text
*/

#include "rpg.h"

t_text *create_text(char *str, char *font_p, sfVector2f position, int size)
{
    t_text *new_text = malloc(sizeof(t_text));
    if (new_text == NULL)
        return (NULL);
    sfColor color = {255, 255, 255, 255};

    new_text->text = sfText_create();
    sfFont *font = sfFont_createFromFile(font_p);

    sfText_setPosition(new_text->text, position);
    sfText_setString(new_text->text, str);
    sfText_setColor(new_text->text, color);
    sfText_setFont(new_text->text, font);
    sfText_setCharacterSize(new_text->text, size);
    new_text->type = UNKNOWN_T;
    new_text->next = NULL;

    return (new_text);
}
