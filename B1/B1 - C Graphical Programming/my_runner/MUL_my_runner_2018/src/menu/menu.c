/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** menu
*/

#include <runner.h>

void menu(t_game *game)
{
    sfVector2f position = {WIDTH / 5, HEIGHT / 16};
    sfText *text = create_text("MY_CATNER", "sprite/font/font.ttf",
        position, 180);
    if (sfMusic_getStatus(game->menu->start->music) == sfStopped) {
        sfMusic_play(game->menu->start->music);
    }
    draw_sprite_list(game, game->menu);
    sfRenderWindow_drawText(game->window, text, NULL);
}