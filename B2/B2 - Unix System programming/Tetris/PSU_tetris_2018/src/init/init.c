/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** init
*/

#include "tetris.h"

t_tetris *init(void)
{
    t_tetris *info = malloc(sizeof(t_tetris));
    if (info == NULL)
        return (NULL);
    if ((info->settings = init_settings()) == NULL) {
        delete_all(info);
        return (NULL);
    }
    info->window = malloc(sizeof(t_window));
    if (info->window == NULL) {
        delete_all(info);
        return (NULL);
    }
    info->tetriminos = NULL;
    return (info);
}
