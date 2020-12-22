/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_pause_scene
*/

#include "rpg.h"

t_button *create_continue_button_pause_scene(t_button *list_button)
{
    sfVector2f position = {680, 300};
    sfVector2f size = {550, 175};
    sfIntRect rect = {0, 2568, 1378, 428};
    t_button *resume = create_button("ressources/buttons/menu_buttons.png",
    MENU_B, &continue_game);
    if (resume == NULL)
        return (NULL);
    resume = create_button_position(resume, position, size, rect);
    list_button = add_button(list_button, resume);
    return (list_button);
}

t_button *create_restart_button_pause_scene(t_button *list_button)
{
    sfVector2f position = {680, 550};
    sfVector2f size = {550, 175};
    sfIntRect rect = {0, 428, 1378, 428};
    t_button *restart = create_button("ressources/buttons/menu_buttons.png",
    MENU_B, &restart_game);
    if (restart == NULL)
        return (NULL);
    restart = create_button_position(restart, position, size, rect);
    list_button = add_button(list_button, restart);
    return (list_button);
}

t_button *create_quit_button_pause_scene(t_button *list_button)
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

t_button *create_settings_button_pause_scene(t_button *list_button)
{
    sfVector2f position = {1700, 850};
    sfVector2f size = {100, 100};
    sfIntRect rect = {0, 0, 64, 64};
    t_button *settings = create_button("ressources/buttons/settings.png",
    MENU_B, &menu_settings);
    if (settings == NULL)
        return (NULL);
    settings = create_button_position(settings, position, size, rect);
    list_button = add_button(list_button, settings);
    return (list_button);
}

t_button *init_buttons_pause_scene(void)
{
    t_button *list_button = NULL;
    if ((list_button = create_continue_button_pause_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_restart_button_pause_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_quit_button_pause_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_settings_button_pause_scene(list_button)) == NULL)
        return (NULL);
    return (list_button);
}
