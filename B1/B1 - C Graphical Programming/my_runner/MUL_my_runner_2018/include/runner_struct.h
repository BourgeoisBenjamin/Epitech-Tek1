/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** header
*/

#ifndef RUNNER_STRUCT_H
#define RUNNER_STRUCT_H

typedef enum entities
{
    GROUND = 1,
    ENEMY = 2,
    ENEMY2 = 3,
    END = 4,
    UNKNOWN = 5,
} type;

typedef struct s_list
{
    int len;
    sfClock *clock;
    struct s_game_object *start;
} t_list;

typedef struct s_game
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfText *score;
    struct s_list *parallax;
    struct s_list *menu;
    struct s_list *pause;
    struct s_list *player;
    struct s_list *player_jump;
    struct s_list *life;
    struct s_list *entities;
    struct s_list *win;
    struct s_list *end;
} t_game;

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

typedef struct s_instance
{
    int started;
    int infinity;
    int pause;
    int dead;
    int win;
    int option;
    int menu;
    int is_jump;
    int life;
    int score;
    int player;
    int is_fall;
} t_instance;

typedef struct s_parser
{
    FILE *fd;
    char *line;
    size_t len;
    ssize_t read;
    sfVector2f pos;
} t_parser;

#endif
