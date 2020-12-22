/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_menu
*/

#include <runner.h>

void init_pause(t_game *game)
{
    my_printf("[LOADING] PAUSE\n");
    sfVector2f position2 = {WIDTH - 1350, HEIGHT - 400};
    sfVector2f position = {WIDTH / 2 - 259 / 2, HEIGHT / 2 - 252 / 2};
    sfIntRect rect = {0, 0, 259, 252};
    t_game_object *button = create_object("sprite/pause.png",
        position, rect);
    add_sprite(game->pause, button);
    game->pause->start->text = create_score("SPACE TO RESUME",
    "sprite/font/pause.ttf", position2, 120);
}

void pause_game(t_game *game, t_instance *instance)
{
    draw_all_sprite(game, instance);
    draw_sprite_list(game, game->pause);
    sfRenderWindow_drawText(game->window, game->pause->start->text, NULL);
}