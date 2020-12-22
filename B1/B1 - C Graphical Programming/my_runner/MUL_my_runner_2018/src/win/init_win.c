/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_win
*/

#include <runner.h>

void init_win(t_game *game)
{
    my_printf("[LOADING] WIN\n");
    sfVector2f position = {WIDTH / 2 - 400 / 2, HEIGHT / 2 - 400 / 2};
    sfIntRect rect = {0, 0, 400, 400};
    t_game_object *bg = create_object("sprite/win.png", position, rect);
    add_sprite(game->win, bg);
    sfVector2f position2 = {700, 50};
    game->win->start->text = create_score("R TO RESTART\n Q TO QUIT",
    "sprite/font/pause.ttf", position2, 120);
    game->win->start->music = sfMusic_createFromFile("sprite/sound/win.ogg");
}

void win_game(t_game *game, t_instance *instance)
{
    draw_all_sprite(game, instance);
    draw_sprite_list(game, game->win);
    sfRenderWindow_drawText(game->window, game->score, NULL);
    sfRenderWindow_drawText(game->window, game->win->start->text, NULL);
}