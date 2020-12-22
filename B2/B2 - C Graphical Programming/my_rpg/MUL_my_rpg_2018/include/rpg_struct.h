/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** header struct
*/

#ifndef RPG_STRUCT_H
#define RPG_STRUCT_H

/********************
    ENUM STRUCT
********************/
enum object
{
    BACKGROUND_O,
    ENTITIES_O,
    MAP_O,
    OBJ_O,
    UNKNOWN_O,
};

enum text
{
    TITLE_T,
    TEXT_T,
    UNKNOWN_T,
};

enum music
{
    BACKGROUND_M,
    EFFECT_M,
    UNKNOWN_M,
};

enum buttons
{
    MENU_B,
    UNKNOWN_B,
};

enum scenes
{
    START,
    SETTINGS,
    PAUSE,
    PLAYER,
    ATTRIB,
    INTRO,
    HOWTOPLAY,
    INVENTORY,
    UPDATE_ATTRIB,
    CONV_SCENE,
    FIGHT,
    GAME1,
    GAME2,
    END,
};

enum move
{
    TOP,
    BOT,
    LEFT,
    RIGHT,
    UNKNOWN_MOV,
};

enum npc
{
    BABY,
    SENSEI,
    ENEMY,
};

/********************
    PRINCIPAL STRUCT
********************/

typedef struct s_rpg
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    struct s_scenes **scenes_array;
    struct s_player *player;
    struct s_settings *settings;
    enum scenes scene;
    enum scenes old_scene;
    enum scenes actual_game;
} t_rpg;

typedef struct s_settings
{
    float sound_vol;
    float music_vol;
} t_settings;

/********************
    PARTICLE STRUCT
********************/

typedef struct s_particle
{
    int speed;
    sfVector2f position;
    sfVector2f velocity;
    int angle;
    float size;
    float lifespan;
    sfColor color;
    sfCircleShape *circle;
    sfRectangleShape *rect;
    struct s_particle *next;
} t_particle;

typedef struct s_particle_info
{
    sfColor color;
    sfVector2f pos;
    int dp;
    float size;
    struct s_particle *system;
} t_particle_info;

typedef struct s_quest
{
    sfText *text;
    bool finish;
    struct s_quest *next;
} t_quest;

/********************
    SCENES STRUCT
********************/

typedef struct s_scenes
{
    sfClock *clock;
    int nb_fight;
    struct s_game_object *objs;
    struct s_button *buttons;
    struct s_text *texts;
    struct s_music *musics;
    struct s_npc *npc;
    struct s_quest *quest;
    struct s_particle_info **system;
} t_scenes;

/********************
    PNJ STRUCT
********************/

typedef struct s_npc
{
    enum npc type;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f position_init;
    int zone;
    sfIntRect rect;
    int offset;
    int offset_height;
    int max_value;
    int move_every;
    int time_left;
    int dir;
    int life;
    int damage;
    int defense;
    struct s_text *list_text;
    int (*callback)(struct s_rpg *game, struct s_npc *npc);
    struct s_npc *next;
} t_npc;

/********************
    PLAYER STRUCT
********************/

typedef struct s_player
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    int offset;
    int max_value;
    sfClock *clock;
    struct s_game_object *inventory;
    struct s_attributs *attrib;
    struct s_npc *on_fight;
} t_player;

typedef struct s_attributs
{
    int skill_pt;
    int life;
    int damage;
    int charisme;
    int strenght;
    int dexterity;
    int constitution;
    int luck;
    int intelligence;
    int defense;
} t_attributs;

/********************
    OBJECT STRUCT
********************/

typedef struct s_game_object
{
    enum object type;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    int offset;
    int max_value;
    int quest;
    int (*callback)(struct s_rpg *game, struct s_game_object *obj);
    struct s_charac_obj *cht;
    struct s_game_object *next;
} t_game_object;

typedef struct s_charac_obj
{
    int life;
    int damage;
    int price;
} t_charac_obj;

typedef struct s_map_obj
{
    char type;
    sfVector2f pos;
    int max_value;
    struct s_map_obj *next;
} t_map_obj;

/********************
    UTILS STRUCT
********************/

typedef struct s_button
{
    enum buttons type;
    sfVector2f pos;
    sfIntRect rect;
    int offset;
    int max_value;
    sfRectangleShape *shape;
    sfTexture *texture;
    void (*onclick)(struct s_button*);
    void (*onhover)(struct s_button*);
    void (*onnormal)(struct s_button*);
    int (*callback)(struct s_rpg *game);
    sfMusic *click_effect;
    struct s_button *next;
} t_button;

typedef struct s_text {
    enum text type;
    sfText *text;
    struct s_text *next;
} t_text;

typedef struct s_music {
    enum music type;
    sfMusic *music;
    struct s_music *next;
} t_music;

#endif
