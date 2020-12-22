/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_start_scene
*/

#include "rpg.h"

t_button *create_play_button_attrib_scene(t_button *list_button)
{
    sfVector2f position = {300, 800};
    sfVector2f size = {550, 175};
    sfIntRect rect = {0, 1712, 1378, 428};
    t_button *play = create_button("ressources/buttons/menu_buttons.png",
    MENU_B, &play_attrib);
    if (play == NULL)
        return (NULL);
    play = create_button_position(play, position, size, rect);
    list_button = add_button(list_button, play);
    return (list_button);
}

t_button *create_quit_button_attrib_scene(t_button *list_button)
{
    sfVector2f position = {1050, 800};
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

t_button *init_buttons_attrib_scene(void)
{
    t_button *list_button = NULL;
    if ((list_button = create_play_button_attrib_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_quit_button_attrib_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_skill1_button_attrib_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_skill2_button_attrib_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_skill3_button_attrib_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_skill4_button_attrib_scene(list_button)) == NULL)
        return (NULL);
    return (list_button);
}
