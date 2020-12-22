/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** move_player
*/

#include "rpg.h"

void move_player(t_rpg *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) == true
        && GAME1 <= game->scene && game->scene <= GAME2)
        move_top(game);
    if (sfKeyboard_isKeyPressed(sfKeyQ) == true
        && GAME1 <= game->scene && game->scene <= GAME2)
        move_left(game);
    if (sfKeyboard_isKeyPressed(sfKeyD) == true
        && GAME1 <= game->scene && game->scene <= GAME2)
        move_right(game);
    if (sfKeyboard_isKeyPressed(sfKeyS) == true
        && GAME1 <= game->scene && game->scene <= GAME2)
        move_bot(game);
}
