/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** quest_management_scene1
*/

#include "rpg.h"

void find_sensei(t_rpg *game, t_quest *quest)
{
    sfFloatRect sensei_p;
    sfFloatRect player_p;

    player_p = sfSprite_getGlobalBounds(game->player->sprite);
    for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc; tmp_npc;
    tmp_npc = tmp_npc->next) {
        sensei_p = sfSprite_getGlobalBounds(tmp_npc->sprite);
        if (sfFloatRect_intersects(&player_p, &sensei_p, NULL) == sfTrue
            && sfKeyboard_isKeyPressed(sfKeyE) == true
            && tmp_npc->type == SENSEI)
            quest->finish = true;
    }
}

void find_potion(t_rpg *game, t_quest *quest)
{
    if (game->player->inventory != NULL)
        quest->finish = true;
    if (quest->finish == true) {
        for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc; tmp_npc;
        tmp_npc = tmp_npc->next) {
            if (tmp_npc->type == SENSEI) {
                delete_list_texts(tmp_npc->list_text);
                tmp_npc->list_text = NULL;
                add_text_to_npc(tmp_npc, "ressources/conv/4.sensei");
            }
        }
    }
}

void talk_sensei_2(t_rpg *game, t_quest *quest)
{
    sfFloatRect sensei_p;
    sfFloatRect player_p;

    player_p = sfSprite_getGlobalBounds(game->player->sprite);
    for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc; tmp_npc;
    tmp_npc = tmp_npc->next) {
        sensei_p = sfSprite_getGlobalBounds(tmp_npc->sprite);
        if (sfFloatRect_intersects(&player_p, &sensei_p, NULL) == sfTrue
        && sfKeyboard_isKeyPressed(sfKeyE) == true && tmp_npc->type == SENSEI) {
            quest->finish = true;
        }
    }
}

void quest_management_scene1(t_rpg *game)
{
    t_quest *tmp = game->scenes_array[game->scene]->quest;
    int nb = 1;

    if (game->scene == GAME1) {
        while (tmp->finish == true && tmp->next != NULL) {
            nb++;
            tmp = tmp->next;
        }
        if (nb == 1)
            find_sensei(game, tmp);
        if (nb == 2)
            find_potion(game, tmp);
        if (nb == 3)
            talk_sensei_2(game, tmp);
    }
}
