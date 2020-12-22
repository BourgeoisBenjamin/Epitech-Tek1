/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** loop_game
*/

#include "tetris.h"

int loop_tetriminos_move(t_tetris *info)
{
    while (is_contact(info->settings, info->game, info->decor) == false
    && !info->settings->is_quit) {
        manage_clock(info);
        if (manage_contact(info) != 1) {
            movement_tetriminos(info);
            manage_contact(info);
        }
        display_game(info);
    }
    return (0);
}

int loop_game(t_tetris *info)
{
    if (init_game(info) == -1)
        return (-1);
    while (!info->settings->is_quit &&
    info->score < BASE * info->settings->level) {
        info->next = init_next_tetriminos(info);
        if (add_tetrimino_in_boardgame(info) == -1)
            break;
        display_game(info);
        loop_tetriminos_move(info);
        if (check_line(info) == -1)
            return (-1);
        info->current = info->next;
        info->score += 1;
    }
    if (info->score > BASE *info->settings->level) {
        delete_game(info);
        info->settings->level++;
        loop_game(info);
    }
    return (0);
}
