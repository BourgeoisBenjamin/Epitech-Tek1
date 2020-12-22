/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** header struct
*/

#ifndef DEFENDER_STRUCT_H
#define DEFENDER_STRUCT_H

/* ENUM */

typedef enum entities
{
    BACKGROUND = 1,
    GRASS = 2,
    ROAD = 3,
    CASTLE = 4,
    MENU1 = 5,
    MENU2 = 6,
    OBJECT = 7,
    TOWER = 8,
    ENEMY = 9,
    UNKNOWN = 10,
} e_type;

typedef enum music
{
    FIRE = 1,
    BACK = 2,
    EFFECT = 3,
} m_type;

/* STRUCT */

typedef struct s_game
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    struct s_music *musics;
    struct s_instance *instance;
    struct s_scenes **scenes_array;
} t_game;

typedef struct s_instance
{
    int scene;
    int start;
    int money;
    int life;
    char *score;
} t_instance;

typedef struct s_game_object
{
    enum entities type;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    sfClock *clock;
    int offset;
    int max_value;
    int vitesse;
    int price;
    int life;
    int damage;
    struct s_game_object *next;
} t_game_object;

typedef struct s_button {
    sfRectangleShape *rect;
    void (*callback)(struct s_game*);
    sfTexture *texture;
    struct s_button *next;
} t_button;

typedef struct s_text {
    sfText *text;
    struct s_text *next;
} t_text;

typedef struct s_music {
    enum music type;
    sfMusic *music;
    struct s_music *next;
} t_music;

typedef struct s_scenes {
    struct s_game_object *objs;
    struct s_button *buttons;
    struct s_text *texts;
    struct s_music *musics;
    sfClock *clock;
} t_scenes;

#endif
