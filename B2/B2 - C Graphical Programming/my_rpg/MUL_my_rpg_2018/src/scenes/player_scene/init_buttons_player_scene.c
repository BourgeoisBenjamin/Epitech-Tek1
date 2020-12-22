/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_start_scene
*/

#include "rpg.h"

t_button *create_men_button_player_scene(t_button *list_button)
{
    sfVector2f position = {500, 300};
    sfVector2f size = {264.55, 290.4};
    sfIntRect rect = {0, 0, 120.25, 132};
    t_button *men = create_button("ressources/buttons/sprite_boy.png",
    MENU_B, &create_men);
    if (men == NULL)
        return (NULL);
    men = create_button_position(men, position, size, rect);
    list_button = add_button(list_button, men);
    return (list_button);
}

t_button *create_girl_button_player_scene(t_button *list_button)
{
    sfVector2f position = {1200, 300};
    sfVector2f size = {300, 288};
    sfIntRect rect = {0, 0, 150, 144};
    t_button *girl = create_button("ressources/buttons/sprite_girl.png",
    MENU_B, &create_girl);
    if (girl == NULL)
        return (NULL);
    girl = create_button_position(girl, position, size, rect);
    list_button = add_button(list_button, girl);
    return (list_button);
}

t_button *create_quit_button_player_scene(t_button *list_button)
{
    sfVector2f position = {680, 800};
    sfVector2f size = {550, 175};
    sfIntRect rect = {0, 1284, 1378, 428};
    t_button *quit = create_button("ressources/buttons/menu_buttons.png",
    MENU_B, &quit_game);
    if (quit == NULL)
        return (NULL);
    quit = create_button_position(quit, position, size, rect);
    list_button = add_button(list_button, quit);
    return (list_button);
}

t_button *init_buttons_player_scene(void)
{
    t_button *list_button = NULL;
    if ((list_button = create_men_button_player_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_girl_button_player_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_quit_button_player_scene(list_button)) == NULL)
        return (NULL);
    return (list_button);
}
