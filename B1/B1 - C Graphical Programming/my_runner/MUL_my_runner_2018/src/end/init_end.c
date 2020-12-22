/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_end
*/

#include <runner.h>

void init_end(t_game *game)
{
    my_printf("[LOADING] END\n");
    sfVector2f position = {WIDTH / 2 - 400 / 2, HEIGHT / 2 - 400 / 2};
    sfIntRect rect = {0, 0, 400, 400};
    t_game_object *bg = create_object("sprite/end.png", position, rect);
    add_sprite(game->end, bg);
    sfVector2f position2 = {700, 50};
    game->end->start->text = create_score("R TO RESTART\n Q TO QUIT",
    "sprite/font/pause.ttf", position2, 120);
}

void end_game(t_game *game, t_instance *instance)
{
    draw_all_sprite(game, instance);
    draw_sprite_list(game, game->end);
    sfRenderWindow_drawText(game->window, game->score, NULL);
    sfRenderWindow_drawText(game->window, game->end->start->text, NULL);
}