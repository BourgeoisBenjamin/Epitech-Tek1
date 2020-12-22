/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_bskills_start_scene
*/

#include "rpg.h"

t_button *create_skill1_button_attrib_scene(t_button *list_button)
{
    sfVector2f position = {350, 680};
    sfVector2f size = {68, 76};
    sfIntRect rect = {0, 0, 86, 95};
    t_button *plus = create_button("ressources/buttons/plus.png",
    MENU_B, &plus_skill1);
    if (plus == NULL)
        return (NULL);
    plus = create_button_position(plus, position, size, rect);
    list_button = add_button(list_button, plus);

    sfVector2f position2 = {20, 680};
    sfVector2f size2 = {68, 76};
    sfIntRect rect2 = {0, 0, 86, 95};
    t_button *minus = create_button("ressources/buttons/minus.png",
    MENU_B, &minus_skill1);
    if (minus == NULL)
        return (NULL);
    minus = create_button_position(minus, position2, size2, rect2);
    list_button = add_button(list_button, minus);
    return (list_button);
}

t_button *create_skill2_button_attrib_scene(t_button *list_button)
{
    sfVector2f position = {830, 680};
    sfVector2f size = {68, 76};
    sfIntRect rect = {0, 0, 86, 95};
    t_button *plus = create_button("ressources/buttons/plus.png",
    MENU_B, &plus_skill2);
    if (plus == NULL)
        return (NULL);
    plus = create_button_position(plus, position, size, rect);
    list_button = add_button(list_button, plus);

    sfVector2f position2 = {480, 680};
    sfVector2f size2 = {68, 76};
    sfIntRect rect2 = {0, 0, 86, 95};
    t_button *minus = create_button("ressources/buttons/minus.png",
    MENU_B, &minus_skill2);
    if (minus == NULL)
        return (NULL);
    minus = create_button_position(minus, position2, size2, rect2);
    list_button = add_button(list_button, minus);
    return (list_button);
}

t_button *create_skill3_button_attrib_scene(t_button *list_button)
{
    sfVector2f position = {1330, 680};
    sfVector2f size = {68, 76};
    sfIntRect rect = {0, 0, 86, 95};
    t_button *plus = create_button("ressources/buttons/plus.png",
    MENU_B, &plus_skill3);
    if (plus == NULL)
        return (NULL);
    plus = create_button_position(plus, position, size, rect);
    list_button = add_button(list_button, plus);

    sfVector2f position2 = {980, 680};
    sfVector2f size2 = {68, 76};
    sfIntRect rect2 = {0, 0, 86, 95};
    t_button *minus = create_button("ressources/buttons/minus.png",
    MENU_B, &minus_skill3);
    if (minus == NULL)
        return (NULL);
    minus = create_button_position(minus, position2, size2, rect2);
    list_button = add_button(list_button, minus);
    return (list_button);
}

t_button *create_skill4_button_attrib_scene(t_button *list_button)
{
    sfVector2f position = {1840, 680};
    sfVector2f size = {68, 76};
    sfIntRect rect = {0, 0, 86, 95};
    t_button *plus = create_button("ressources/buttons/plus.png",
    MENU_B, &plus_skill4);
    if (plus == NULL)
        return (NULL);
    plus = create_button_position(plus, position, size, rect);
    list_button = add_button(list_button, plus);

    sfVector2f position2 = {1420, 680};
    sfVector2f size2 = {68, 76};
    sfIntRect rect2 = {0, 0, 86, 95};
    t_button *minus = create_button("ressources/buttons/minus.png",
    MENU_B, &minus_skill4);
    if (minus == NULL)
        return (NULL);
    minus = create_button_position(minus, position2, size2, rect2);
    list_button = add_button(list_button, minus);
    return (list_button);
}
