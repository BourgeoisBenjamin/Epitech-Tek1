/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** read_key
*/

#include "tetris.h"

int action_key(t_tetris *info, char *key[7], int (*tab_ft[7])(t_tetris*),
char buff[10])
{
    for (int i = 0; key[i]; i++) {
        if (buff[0] == 27
        && buff[my_strlen(buff) - 1] == key[i][my_strlen(key[i]) - 1]) {
            return (tab_ft[i](info));
        }
        if (my_strcmp(buff, key[i]) == 0
            && my_strlen(buff) == my_strlen(key[i]))
            return (tab_ft[i](info));
    }
    return (0);
}

int read_key(t_tetris *info)
{
    char *key[7] = {info->settings->key_left2, info->settings->key_right2,
        info->settings->key_turn, info->settings->key_drop,
        info->settings->key_quit, info->settings->key_pause, NULL};
    int (*tab_ft[7])(t_tetris*) = {&key_left2_ft, &key_right2_ft, &key_turn_ft,
        &key_drop_ft, &key_quit_ft, &key_pause_ft};
    char buff[10];
    int len = 0;

    my_memset(buff, 0, 10);
    len = read(0, buff, 10);
    if (len == 0)
        return (0);

    return (action_key(info, key, tab_ft, buff));
}
