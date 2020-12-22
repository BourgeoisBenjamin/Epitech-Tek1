/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** buy_tower
*/

#include "defender.h"

void buy_tower1(t_game *game)
{
    if (game->instance->money < 50 || game->instance->start)
        return;
    game->instance->money -= 50;
    sfText_setString(game->scenes_array[1]->texts->text,
    my_itoa(game->instance->money));
    draw_scene(game->window, game->scenes_array, game->instance->scene);
    sfIntRect rect = {0, 0, 135, 135};
    sfVector2i pos_click = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f true_click = {(float)pos_click.x, (float)pos_click.y};
    t_game_object *temp = create_object("rsc/Tower1.png",
    true_click, rect, 135);
    temp->damage = 50;
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfSprite_setOrigin(temp->sprite, origin);
    posed_tower(game, temp);
}

void buy_tower2(t_game *game)
{
    if (game->instance->money < 100 || game->instance->start)
        return;
    game->instance->money -= 100;
    sfText_setString(game->scenes_array[1]->texts->text,
    my_itoa(game->instance->money));
    draw_scene(game->window, game->scenes_array, game->instance->scene);
    sfIntRect rect = {0, 0, 135, 135};
    sfVector2i pos_click = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f true_click = {(float)pos_click.x, (float)pos_click.y};
    t_game_object *temp = create_object("rsc/Tower2.png",
    true_click, rect, 135);
    temp->damage = 100;
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfSprite_setOrigin(temp->sprite, origin);
    posed_tower(game, temp);
}

void buy_tower3(t_game *game)
{
    if (game->instance->money < 150 || game->instance->start)
        return;
    game->instance->money -= 150;
    sfText_setString(game->scenes_array[1]->texts->text,
    my_itoa(game->instance->money));
    draw_scene(game->window, game->scenes_array, game->instance->scene);
    sfIntRect rect = {0, 0, 135, 135};
    sfVector2i pos_click = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f true_click = {(float)pos_click.x, (float)pos_click.y};
    t_game_object *temp = create_object("rsc/Tower3.png",
    true_click, rect, 135);
    temp->damage = 150;
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfSprite_setOrigin(temp->sprite, origin);
    posed_tower(game, temp);
}

void buy_tower4(t_game *game)
{
    if (game->instance->money < 200 || game->instance->start)
        return;
    game->instance->money -= 200;
    sfText_setString(game->scenes_array[1]->texts->text,
    my_itoa(game->instance->money));
    draw_scene(game->window, game->scenes_array, game->instance->scene);
    sfIntRect rect = {0, 0, 135, 135};
    sfVector2i pos_click = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f true_click = {(float)pos_click.x, (float)pos_click.y};
    t_game_object *temp = create_object("rsc/Tower4.png",
    true_click, rect, 135);
    temp->damage = 200;
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfSprite_setOrigin(temp->sprite, origin);
    posed_tower(game, temp);
}
