/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_fight_scene
*/

#include "rpg.h"

t_button *create_defenseb_fight_scene(t_button *list_button)
{
    sfVector2f position = {1090, 850};
    sfVector2f size = {248, 77};
    sfIntRect rect = {0, 428, 1378, 428};
    t_button *defense_b = create_button("ressources/buttons/fight.png", MENU_B,
    &defense);
    if (defense_b == NULL)
        return (NULL);
    defense_b = create_button_position(defense_b, position, size, rect);
    list_button = add_button(list_button, defense_b);

    return (list_button);
}

t_button *create_specialb_fight_scene(t_button *list_button)
{
    sfVector2f position = {820, 850};
    sfVector2f size = {248, 77};
    sfIntRect rect = {0, 856, 1378, 428};
    t_button *special_b = create_button("ressources/buttons/fight.png", MENU_B,
    &special);
    if (special_b == NULL)
        return (NULL);
    special_b = create_button_position(special_b, position, size, rect);
    list_button = add_button(list_button, special_b);

    return (list_button);
}

t_button *create_attackb_fight_scene(t_button *list_button)
{
    sfVector2f position = {550, 850};
    sfVector2f size = {248, 77};
    sfIntRect rect = {0, 0, 1378, 428};
    t_button *attack_b = create_button("ressources/buttons/fight.png", MENU_B,
    &attack);
    if (attack_b == NULL)
        return (NULL);
    attack_b = create_button_position(attack_b, position, size, rect);
    list_button = add_button(list_button, attack_b);

    return (list_button);
}

t_button *init_buttons_fight_scene(void)
{
    t_button *list_button = NULL;
    if ((list_button = create_attackb_fight_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_defenseb_fight_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_specialb_fight_scene(list_button)) == NULL)
        return (NULL);

    return (list_button);
}
