/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** life
*/

#include <runner.h>

void init_life(t_game *game)
{
    my_printf("[LOADING] LIFE\n");
    char *life = "sprite/life.png";

    sfVector2f position[] = {{WIDTH - 440, 40}, {WIDTH - 310, 40},
    {WIDTH - 180, 40}};
    sfIntRect rect = {0, 0, 126, 132};

    for (int i = 0; i < 3; i++) {
        t_game_object *temp = create_object(life, position[i], rect);
        add_sprite(game->life, temp);
        game->life->start->max_value = 126;
        game->life->start->offset = 126;
    }
}