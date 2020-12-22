/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_buttons_settings_scene
*/

#include "rpg.h"

t_button *create_volume_music_button_inventory_scene(t_button *list_button)
{
    sfVector2f position = {980, 680};
    sfVector2f size = {40, 40};
    sfIntRect rect = {0, 128, 128, 128};
    t_button *up = create_button("ressources/buttons/sound.png", MENU_B,
    &volume_up_main_music);
    if (up == NULL)
        return (NULL);
    up = create_button_position(up, position, size, rect);
    list_button = add_button(list_button, up);

    sfVector2f position2 = {880, 680};
    sfIntRect rect2 = {0, 256, 128, 128};
    t_button *down = create_button("ressources/buttons/sound.png", MENU_B,
    &volume_down_main_music);
    if (down == NULL)
        return (NULL);
    down = create_button_position(down, position2, size, rect2);
    list_button = add_button(list_button, down);
    return (list_button);
}

t_button *create_volume_effect_button_inventory_scene(t_button *list_button)
{
    sfVector2f position = {980, 780};
    sfVector2f size = {40, 40};
    sfIntRect rect = {0, 128, 128, 128};
    t_button *up = create_button("ressources/buttons/sound.png", MENU_B,
    &volume_up_effect_music);
    if (up == NULL)
        return (NULL);
    up = create_button_position(up, position, size, rect);
    list_button = add_button(list_button, up);

    sfVector2f position2 = {880, 780};
    sfIntRect rect2 = {0, 256, 128, 128};
    t_button *down = create_button("ressources/buttons/sound.png", MENU_B,
    &volume_down_effect_music);
    if (down == NULL)
        return (NULL);
    down = create_button_position(down, position2, size, rect2);
    list_button = add_button(list_button, down);
    return (list_button);
}

t_button *create_mute_button_inventory_scene(t_button *list_button)
{
    sfVector2f position = {930, 680};
    sfVector2f size = {40, 40};
    sfIntRect rect = {0, 0, 128, 128};
    t_button *mute_music = create_button("ressources/buttons/sound.png", MENU_B,
    &volume_mute_main_music);
    if (mute_music == NULL)
        return (NULL);
    mute_music = create_button_position(mute_music, position, size, rect);
    list_button = add_button(list_button, mute_music);

    sfVector2f position2 = {930, 780};
    t_button *mute_sound = create_button("ressources/buttons/sound.png", MENU_B,
    &volume_mute_effect_music);
    if (mute_sound == NULL)
        return (NULL);
    mute_sound = create_button_position(mute_sound, position2, size, rect);
    list_button = add_button(list_button, mute_sound);
    return (list_button);
}

t_button *create_closeb_inventory_scene(t_button *list_button)
{
    sfVector2f position = {1340, 160};
    sfVector2f size = {70, 70};
    sfIntRect rect = {0, 0, 11, 11};
    t_button *close = create_button("ressources/buttons/close_inv.png", MENU_B,
    &close_inventory);
    if (close == NULL)
        return (NULL);
    close = create_button_position(close, position, size, rect);
    list_button = add_button(list_button, close);

    return (list_button);
}

t_button *init_buttons_inventory_scene(void)
{
    t_button *list_button = NULL;
    if ((list_button = create_closeb_inventory_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_mute_button_inventory_scene(list_button)) == NULL)
        return (NULL);
    if ((list_button = create_volume_effect_button_inventory_scene(list_button))
        == NULL)
        return (NULL);
    if ((list_button = create_volume_music_button_inventory_scene(list_button))
        == NULL)
        return (NULL);
    return (list_button);
}
