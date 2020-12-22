/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** header
*/



enum type {
    PLAYER,
    ENEMY,
    OBSTACLES,
    BLOCK,
};

typedef struct s_game_object
{
    enum type;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfRecInt rect;
} t_game_object;