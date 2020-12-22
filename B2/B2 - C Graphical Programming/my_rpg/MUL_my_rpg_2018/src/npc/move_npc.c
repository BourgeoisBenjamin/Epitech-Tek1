/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** move_npc
*/

#include "rpg.h"

t_npc *move_npc_left(t_npc *npc)
{
    if (npc->position_init.x - npc->zone < npc->position.x - 2) {
        npc->position.x -= 2;
        npc->rect.top = npc->offset_height;
        move_rect(npc->sprite, &npc->rect, npc->offset, npc->max_value);
    } else {
        npc->rect.left = npc->offset;
        npc->rect.top = 0;
        sfSprite_setTextureRect(npc->sprite, npc->rect);
    }
    return (npc);
}

t_npc *move_npc_right(t_npc *npc)
{
    if (npc->position_init.x + npc->zone > npc->position.x + 2) {
        npc->position.x += 2;
        npc->rect.top = 2 * npc->offset_height;
        move_rect(npc->sprite, &npc->rect, npc->offset, npc->max_value);
    } else {
        npc->rect.left = npc->offset;
        npc->rect.top = 0;
        sfSprite_setTextureRect(npc->sprite, npc->rect);
    }
    return (npc);
}

t_npc *move_npc_up(t_npc *npc)
{
    if (npc->position_init.y - npc->zone < npc->position.y - 2) {
        npc->position.y -= 2;
        npc->rect.top = 3 * npc->offset_height;
        move_rect(npc->sprite, &npc->rect, npc->offset, npc->max_value);
    } else {
        npc->rect.left = npc->offset;
        npc->rect.top = 0;
        sfSprite_setTextureRect(npc->sprite, npc->rect);
    }
    return (npc);
}

t_npc *move_npc_down(t_npc *npc)
{
    if (npc->position_init.y + npc->zone > npc->position.y + 2) {
        npc->position.y += 2;
        npc->rect.top = 0;
        move_rect(npc->sprite, &npc->rect, npc->offset, npc->max_value);
    } else {
        npc->rect.left = npc->offset;
        npc->rect.top = 0;
        sfSprite_setTextureRect(npc->sprite, npc->rect);
    }
    return (npc);
}

t_npc *move_npc(t_npc *npc, int seconds)
{
    t_npc *(*dir_ft[5])(t_npc*) = {&move_npc_up, &move_npc_down,
        &move_npc_right, &move_npc_left, NULL};
    if (seconds - npc->time_left < npc->move_every) {
        npc->rect.left = npc->offset; npc->rect.top = 0;
        sfSprite_setTextureRect(npc->sprite, npc->rect);
        return (npc);
    }
    if (seconds - npc->time_left > npc->move_every + 2) {
        npc->time_left = seconds;
        npc->dir = 0;
        npc->dir = rand() % 4;
        return (npc);
    }
    for (int i = 0; dir_ft[i]; i++) {
        if (i == npc->dir) {
            npc = dir_ft[i](npc);
            break;
        }
    }
    return (npc);
}
