/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** loading_screen
*/

#include "rpg.h"

int loading_screen(sfRenderWindow *window)
{
    sfIntRect rect = {0 , 0, 1920, 1080};
    sfVector2f pos = {0, 0};
    sfTexture *tex = sfTexture_createFromFile("ressources/back/loading.png",
    NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, tex, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    sfTexture_destroy(tex);
    sfSprite_destroy(sprite);
    return (0);
}
