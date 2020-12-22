/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_htp_scene
*/

#include "rpg.h"

t_button *create_back_button_htp_scene(t_button *list_button)
{
    sfVector2f position = {1600, 800};
    sfVector2f size = {128, 128};
    sfIntRect rect = {0, 0, 170, 152};
    t_button *backb = create_button("ressources/buttons/back.png", MENU_B,
    &back);
    if (backb == NULL)
        return (NULL);
    backb = create_button_position(backb, position, size, rect);
    list_button = add_button(list_button, backb);

    return (list_button);
}

t_button *init_buttons_htp_scene(void)
{
    t_button *list_button = NULL;

    if ((list_button = create_back_button_htp_scene(list_button))
        == NULL)
        return (NULL);
    return (list_button);
}
