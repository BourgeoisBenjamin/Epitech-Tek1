/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** move_entities
*/

#include <runner.h>

void move_entities(t_list *entities, t_instance *instance)
{
    sfTime time = sfClock_getElapsedTime(entities->clock);
    float seconds = time.microseconds / 10000.0;
    if (seconds < 1)
        return;
    t_game_object *temp = entities->start;

    while (temp) {
        temp->position.x -= 1 * temp->vitesse;
        sfSprite_setPosition(temp->sprite, temp->position);
        if (temp->position.x < -189) {
            t_game_object *to_delete = temp;
            temp = temp->next;
            delete_node_address(entities, to_delete);
            generate_map(entities, instance);
        } else {
            temp = temp->next;
        }
    }
    sfClock_restart(entities->clock);
}

void generate_map(t_list *entities, t_instance *instance)
{
    if (!instance->infinity)
        return;

    char *sprite[] = {"sprite/ground.png", "sprite/enemy.png", \
    "sprite/enemy2.png", "sprite/end.png"};

    t_game_object *temp = NULL;
    sfIntRect rect = {0, 0, 189, 180};
    sfVector2f pos = {2079, 900};

    temp = create_object(sprite[0], pos, rect);
    temp->type = 1;
    temp->vitesse = 8;
    add_sprite(entities, temp);
}