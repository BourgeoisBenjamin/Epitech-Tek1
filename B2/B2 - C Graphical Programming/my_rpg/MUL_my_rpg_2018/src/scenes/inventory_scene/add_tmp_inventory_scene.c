/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** add_tmp_inventory_scene
*/

#include "rpg.h"

t_text *add_tmp_text_inv_scene(t_text *list, t_player *player)
{
    int pt[] = {player->attrib->charisme, player->attrib->strenght,
        player->attrib->dexterity, player->attrib->constitution,
        player->attrib->luck, player->attrib->intelligence,
        player->attrib->defense};
    sfVector2f pos = {800, 330};
    t_text *text = NULL;
    char *str = NULL;

    for (int i = 0; i < 7; i++) {
        str = my_itoa(pt[i]);
        text = create_text(str, "ressources/font/karnivor.ttf", pos, 20);
        text->type = TITLE_T;
        if (text == NULL)
            return (NULL);
        list = add_text(list, text);
        free(str);
        pos.y += 70;
    }
    return (list);
}

t_text *add_tmp_text2_inv_scene(t_text *list, t_player *player)
{
    int pt[] = {player->attrib->skill_pt, player->attrib->damage,
        player->attrib->life};
    sfVector2f pos = {1250, 643};
    t_text *text = NULL;
    char *str = NULL;

    for (int i = 0; i < 3; i++) {
        str = my_itoa(pt[i]);
        text = create_text(str, "ressources/font/karnivor.ttf", pos, 20);
        text->type = TITLE_T;
        if (text == NULL)
            return (NULL);
        list = add_text(list, text);
        free(str);
        pos.y += 50;
    }
    return (list);
}

t_button *add_tmp_buttons_inv_scene(t_button *list_button, t_player *player)
{
    int (*ft[7])(t_rpg*) = {&delete_obj1_inv, &delete_obj2_inv,
        &delete_obj3_inv, &delete_obj4_inv,
        &delete_obj5_inv, &delete_obj6_inv, NULL};
    sfVector2f pos = {880, 300};
    t_button *but = NULL;
    sfVector2f size = {30, 30};
    sfIntRect rect = {0, 0, 11, 11};
    int i = 0;
    for (t_game_object *tmp = player->inventory; tmp && i < 6;
    tmp = tmp->next, i++) {
        if (i == 3) {
            pos.x = 880, pos.y = 450;
        }
        but = create_button("ressources/buttons/close_inv.png", MENU_B, ft[i]);
        if (but == NULL) return (NULL);
        but = create_button_position(but, pos, size, rect);
        list_button = add_button(list_button, but);
        pos.x += 160;
    }
    return (list_button);
}

t_game_object *add_tmp_obj_inv_scene(t_game_object *list, t_player *player)
{
    int i = 0;
    sfVector2f pos = {915, 320};
    t_game_object *new = NULL;
    sfVector2f scale = {3, 3};
    for (t_game_object *tmp = player->inventory; tmp && i < 6;
    tmp = tmp->next, i++) {
        if (i == 3) {
            pos.x = 915;
            pos.y = 480;
        }
        new = duplicate_obj(tmp);
        if (new == NULL)
            return (NULL);
        new->position = pos;
        sfSprite_setPosition(new->sprite, pos);
        sfSprite_setScale(new->sprite, scale);
        list = add_object(list, new);
        pos.x += 158;
    }
    return (list);
}

int add_tmp_inventory_scene(t_scenes *inv_scene, t_player *player)
{
    update_damage_player(player);
    update_life_player(player);
    if ((inv_scene->objs = add_tmp_obj_inv_scene(inv_scene->objs, player))
        == NULL)
        return (-1);
    if ((inv_scene->buttons = add_tmp_buttons_inv_scene(inv_scene->buttons,
        player)) == NULL)
        return (-1);
    if ((inv_scene->texts = add_tmp_text_inv_scene(inv_scene->texts, player))
        == NULL)
        return (-1);
    if ((inv_scene->texts = add_tmp_text2_inv_scene(inv_scene->texts, player))
        == NULL)
        return (-1);
    return (0);
}
