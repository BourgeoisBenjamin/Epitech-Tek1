/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** header
*/

#ifndef DEFENDER_H
#define DEFENDER_H

#include "my.h"
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Font.h>

typedef struct s_button {
    sfRectangleShape *rect;
    void (*callback)(void);
} button_t;

typedef struct s_game_object
{
    enum entities type;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
    sfText *text;
    sfMusic *music;
    sfClock *clock;
    int offset;
    int max_value;
    int vitesse;
    int gravity;
    struct s_game_object *next;
} t_game_object;

typedef struct scene_s {
    struct s_game_object *objs;
    struct button_s *buttons;
} scene_t;

#endif
