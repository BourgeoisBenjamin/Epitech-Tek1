/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** create_map
*/

#include <runner.h>

void create_map(t_game *game, t_parser *map)
{
    char *sprite[] = {"sprite/ground.png", "sprite/enemy.png", \
    "sprite/enemy2.png", "sprite/end_game.png"};
    t_game_object *temp = NULL;
    static sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 189, 180};

    for (int i = 0; map->line[i]; i++) {
        for (type entities = GROUND; entities < UNKNOWN; entities++) {
            if (map->line[i] - '0' == (int)entities) {
                temp = create_object(sprite[entities - 1], pos, rect);
                temp->type = entities;
                temp->vitesse = 8;
                temp->music = sfMusic_createFromFile("sprite/sound/hit.ogg");
                add_sprite(game->entities, temp);
            }
        }
        pos.x += 189;
    }
    pos.y = (pos.y >= 900) ? 0 : pos.y + 180;
    pos.x = 0;
}