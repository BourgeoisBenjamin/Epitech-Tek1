/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** add_tmp_inventory_scene
*/

#include "rpg.h"

t_text *add_tmp_text_fight_scene(t_text *list_text,
t_player *player, t_npc *npc)
{
    char *str = NULL;
    t_text *text = NULL;
    sfVector2f pos = {640, 685};
    int tab[] = {player->attrib->life, player->attrib->damage,
        npc->life, npc->damage};
    for (int i = 0; i < 4; i++) {
        if (i == 2) {
            pos.x = 1240;
            pos.y = 685;
        }
        str = my_itoa(tab[i]);
        text = create_text(str, "ressources/font/karnivor.ttf", pos, 20);
        text->type = TITLE_T;
        if (text == NULL)
            return (NULL);
        list_text = add_text(list_text, text);
        free(str);
        pos.y += 70;
    }
    return (list_text);
}

t_game_object *add_tmp_obj_fight_scene(t_game_object *list,
t_player *player, t_npc *enemy)
{
    sfVector2f pos = {200, 150};
    sfVector2f pos2 = {1700, 320};
    t_game_object *player_o = NULL;
    t_game_object *enemy_o = NULL;
    sfVector2f scale = {5, 5};
    sfVector2f scale2 = {3, 3};

    player_o = player_to_obj(player, pos);
    enemy_o = npc_to_obj(enemy, pos2);
    sfSprite_setScale(player_o->sprite, scale);
    sfSprite_setScale(enemy_o->sprite, scale2);

    list = add_object(list, player_o);
    list = add_object(list, enemy_o);

    return (list);
}

int add_tmp_fight_scene(t_scenes *scene, t_player *player, t_npc *enemy)
{
    if ((scene->objs = add_tmp_obj_fight_scene(scene->objs, player, enemy))
        == NULL)
        return (-1);
    if ((scene->texts = add_tmp_text_fight_scene(scene->texts, player, enemy))
        == NULL)
        return (-1);
    return (0);
}
