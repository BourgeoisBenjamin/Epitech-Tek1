/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_end_scene
*/

#include "rpg.h"

t_button *create_quit_button_end_scene(t_button *list_button)
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

t_button *init_buttons_end_scene(void)
{
    t_button *list_button = NULL;

    if ((list_button = create_quit_button_end_scene(list_button))
        == NULL)
        return (NULL);
    return (list_button);
}
