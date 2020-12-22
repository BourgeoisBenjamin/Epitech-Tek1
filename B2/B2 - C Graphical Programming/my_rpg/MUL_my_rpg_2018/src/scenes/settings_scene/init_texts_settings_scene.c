/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_settings_scene
*/

#include "rpg.h"

t_text *create_title_settings_scene(t_text *list_text)
{
    sfVector2f pos = {400, 50};
    t_text *settings = create_text("SETTINGS", "ressources/font/karnivor.ttf",
    pos, 180);
    settings->type = TITLE_T;
    if (settings == NULL)
        return (NULL);
    list_text = add_text(list_text, settings);
    return (list_text);
}

t_text *create_text_volume_settings_scene(t_text *list_text)
{
    sfVector2f pos = {650, 350};
    t_text *music = create_text("Music volume", "ressources/font/karnivor.ttf",
    pos, 80);
    music->type = TITLE_T;
    if (music == NULL)
        return (NULL);
    list_text = add_text(list_text, music);

    sfVector2f pos2 = {630, 700};
    t_text *effect = create_text("Effect volume",
    "ressources/font/karnivor.ttf", pos2, 80);
    effect->type = TITLE_T;
    if (effect == NULL)
        return (NULL);
    list_text = add_text(list_text, effect);

    return (list_text);
}

t_text *init_texts_settings_scene(void)
{
    t_text *list_text = NULL;
    if ((list_text = create_title_settings_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_text_volume_settings_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
