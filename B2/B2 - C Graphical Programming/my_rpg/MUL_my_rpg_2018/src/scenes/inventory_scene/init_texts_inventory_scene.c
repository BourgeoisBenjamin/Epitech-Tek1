/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_inventory_scene
*/

#include "rpg.h"

t_text *create_title_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {610, 20};
    t_text *settings = create_text("INVENTORY", "ressources/font/karnivor.ttf",
    pos, 100);
    if (settings == NULL)
        return (NULL);
    settings->type = TITLE_T;
    list_text = add_text(list_text, settings);
    return (list_text);
}

t_text *create_objects_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {900, 250};
    t_text *name = create_text("OBJECTS", "ressources/font/karnivor.ttf",
    pos, 40);
    if (name == NULL)
        return (NULL);
    name->type = TITLE_T;
    list_text = add_text(list_text, name);
    return (list_text);
}

t_text *create_name_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {1050, 780};
    t_text *name = create_text("CHARLIE", "ressources/font/karnivor.ttf",
    pos, 40);
    if (name == NULL)
        return (NULL);
    name->type = TITLE_T;
    list_text = add_text(list_text, name);
    return (list_text);
}

t_text *create_text_volume_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {920, 640};
    t_text *music = create_text("Music", "ressources/font/karnivor.ttf",
    pos, 20);
    if (music == NULL)
        return (NULL);
    music->type = TITLE_T;
    list_text = add_text(list_text, music);

    sfVector2f pos2 = {910, 740};
    t_text *effect = create_text("Effect",
    "ressources/font/karnivor.ttf", pos2, 20);
    if (effect == NULL)
        return (NULL);
    effect->type = TITLE_T;
    list_text = add_text(list_text, effect);

    return (list_text);
}

t_text *init_texts_inventory_scene(void)
{
    t_text *list_text = NULL;
    t_text *(*ft_text[13])(t_text*) = {&create_title_inventory_scene,
        &create_text_volume_inventory_scene, &create_skills_inventory_scene,
        &create_objects_inventory_scene, &create_name_inventory_scene,
        &create_skill1_inventory_scene, &create_skill2_inventory_scene,
        &create_skill3_inventory_scene, &create_skill4_inventory_scene,
        &create_skill5_inventory_scene, &create_skill6_inventory_scene,
        &create_skill7_inventory_scene, NULL};

    for (int i = 0; ft_text[i]; i++) {
        if ((list_text = ft_text[i](list_text)) == NULL)
            return (NULL);
    }
    return (list_text);
}
