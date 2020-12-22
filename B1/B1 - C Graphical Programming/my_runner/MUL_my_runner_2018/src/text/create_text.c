/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** create_text
*/

#include <runner.h>

sfText *create_text(char *str, char *font, sfVector2f position, int size)
{
    sfColor color = {68, 85, 0, 255};
    sfText *text = sfText_create();
    sfFont *font2 = sfFont_createFromFile(font);

    sfText_setPosition(text, position);
    sfText_setString(text, str);
    sfText_setColor(text, color);
    sfText_setFont(text, font2);
    sfText_setCharacterSize(text, size);

    return text;
}