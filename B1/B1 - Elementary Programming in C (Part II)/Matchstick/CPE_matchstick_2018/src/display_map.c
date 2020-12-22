/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** display_map
*/

#include <matchstick.h>

void display_map(t_info *game)
{
    for (int i = 0; i < game->rows; i++) {
        my_printf("%s", game->map[i]);
    }
    if (game->return_status == 1)
        my_printf("I lost... snif... but I'll get you next time!!\n");
    else if (game->return_status == 2)
        my_printf("You lost, too bad...\n");
    else
        my_printf("\n");
}