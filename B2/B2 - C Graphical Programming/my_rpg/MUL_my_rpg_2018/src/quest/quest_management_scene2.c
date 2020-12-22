/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** quest_management_scene2
*/

#include "rpg.h"

void speak_to_baby(t_rpg *game, t_quest *quest)
{
    sfFloatRect baby_p;
    sfFloatRect player_p;

    player_p = sfSprite_getGlobalBounds(game->player->sprite);
    for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc; tmp_npc;
    tmp_npc = tmp_npc->next) {
        baby_p = sfSprite_getGlobalBounds(tmp_npc->sprite);
        if (sfFloatRect_intersects(&player_p, &baby_p, NULL) == sfTrue
        && sfKeyboard_isKeyPressed(sfKeyE) == true
        && tmp_npc->type == BABY) {
            quest->finish = true;
            find_obj_to_delete(game->scenes_array[game->scene]->objs, 1);
        }
    }
}

void fight_enemies(t_rpg *game, t_quest *quest)
{
    if (game->scenes_array[game->scene]->nb_fight == 2) {
        quest->finish = true;
        find_obj_to_delete(game->scenes_array[game->scene]->objs, 2);
    }
}

void find_twin(t_rpg *game, t_quest *quest)
{
    sfFloatRect sensei_p;
    sfFloatRect player_p;

    player_p = sfSprite_getGlobalBounds(game->player->sprite);
    for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc; tmp_npc;
    tmp_npc = tmp_npc->next) {
        sensei_p = sfSprite_getGlobalBounds(tmp_npc->sprite);
        if (sfFloatRect_intersects(&player_p, &sensei_p, NULL) == sfTrue
        && sfKeyboard_isKeyPressed(sfKeyE) == true
        && tmp_npc->type == SENSEI) {
            quest->finish = true;
        }
    }
}

void go_fight(t_rpg *game, t_quest *quest)
{
    if (game->scenes_array[game->scene]->nb_fight == 3) {
        quest->finish = true;
    }
    if (quest->finish == true) {
        for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc;
        tmp_npc != NULL; tmp_npc = tmp_npc->next) {
            if (tmp_npc->type == SENSEI) {
                delete_list_texts(tmp_npc->list_text);
                tmp_npc->list_text = NULL;
                add_text_to_npc(tmp_npc, "./ressources/conv/6.sensei");
            }
        }
    }
}

void quest_management_scene2(t_rpg *game)
{
    t_quest *tmp = game->scenes_array[game->scene]->quest;
    int nb = 1;

    if (game->scene == GAME2) {
        while (tmp->finish == true && tmp->next != NULL) {
            nb++;
            tmp = tmp->next;
        }
        if (nb == 1)
            speak_to_baby(game, tmp);
        if (nb == 2)
            fight_enemies(game, tmp);
        if (nb == 3)
            find_twin(game, tmp);
        if (nb == 4)
            go_fight(game, tmp);
    }
}
