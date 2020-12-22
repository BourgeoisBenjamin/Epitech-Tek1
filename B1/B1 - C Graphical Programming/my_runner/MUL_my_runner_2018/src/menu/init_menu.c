/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_menu
*/

#include <runner.h>

void init_menu(t_game *game)
{
    my_printf("[LOADING] MENU\n");
    sfVector2f position = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    sfVector2f position2 = {WIDTH / 2 - 433 / 2, HEIGHT / 2 - 544 / 3};
    sfIntRect rect2  = {0, 0, 433, 544};
    t_game_object *background = create_object("sprite/background/layer_05.png",
        position, rect);
    background->music = sfMusic_createFromFile("sprite/sound/music.ogg");
    sfMusic_setLoop(background->music, sfTrue);
    sfMusic_setVolume(background->music, 50);
    t_game_object *menu = create_object("sprite/menu buttons.png",
        position2, rect2);
    add_sprite(game->menu, background);
    add_sprite(game->menu, menu);
}