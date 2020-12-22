/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** main
*/

#include <runner.h>

int main(int argc, char **argv)
{
    t_game *game = malloc(sizeof(t_game));
    t_instance *instance = malloc(sizeof(t_instance));
    if (check_arg(argc, argv, instance) || game == NULL || instance == NULL)
        return 84;
    init(game, instance);
    if (!game->window || parser(game, argv[1], instance) == 84
        || infinity(game, instance) == 84) {
        destroy_game(game, instance);
        return 84;
    }
    sfRenderWindow_setFramerateLimit(game->window, 60);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            event(game, instance, argv);
        }
        game_main(game, instance);
        sfRenderWindow_display(game->window);
    }
    destroy_game(game, instance);
    return 0;
}