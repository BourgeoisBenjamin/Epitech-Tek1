/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** create_score
*/

#include <runner.h>

sfText *create_score(char *str, char *font, sfVector2f position, int size)
{
    sfColor color = {31, 31, 98, 255};
    sfText *text = sfText_create();
    sfFont *font2 = sfFont_createFromFile(font);

    sfText_setPosition(text, position);
    sfText_setString(text, str);
    sfText_setColor(text, color);
    sfText_setFont(text, font2);
    sfText_setCharacterSize(text, size);

    return text;
}