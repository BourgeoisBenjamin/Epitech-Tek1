/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** infinity
*/

#include <runner.h>

int infinity(t_game *game, t_instance *instance)
{
    if (!instance->infinity)
        return 0;
    t_parser *map = malloc(sizeof(t_parser));
    if (map == NULL)
        return 84;

    char *sprite[] = {"sprite/ground.png", "sprite/enemy.png", \
    "sprite/enemy2.png", "sprite/end.png"};
    t_game_object *temp = NULL;
    sfIntRect rect = {0, 0, 189, 180};
    map->pos.y = 900;
    for (int j = 0; j < 12; j++) {
        temp = create_object(sprite[0], map->pos, rect);
        temp->type = 1;
        temp->vitesse = 8;
        temp->music = sfMusic_createFromFile("sprite/sound/hit.ogg");
        add_sprite(game->entities, temp);
        map->pos.x += 189;
    }
    return 0;
}