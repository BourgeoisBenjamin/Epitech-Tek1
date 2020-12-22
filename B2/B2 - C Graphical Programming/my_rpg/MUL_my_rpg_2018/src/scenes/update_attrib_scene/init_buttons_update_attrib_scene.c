/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_start_scene
*/

#include "rpg.h"

t_button *create_continue_button_update_attrib_scene(t_button *list_button)
{
    sfVector2f position = {680, 800};
    sfVector2f size = {550, 175};
    sfIntRect rect = {0, 2568, 1378, 428};
    t_button *continueb = create_button("ressources/buttons/menu_buttons.png",
    MENU_B, &continue_game);
    if (continueb == NULL)
        return (NULL);
    continueb = create_button_position(continueb, position, size, rect);
    list_button = add_button(list_button, continueb);
    return (list_button);
}

t_button *init_buttons_update_attrib_scene(void)
{
    t_button *list_button = NULL;
    if ((list_button = create_continue_button_update_attrib_scene(list_button))
        == NULL)
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
