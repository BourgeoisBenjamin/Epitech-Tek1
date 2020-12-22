/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** updated_text_attrib_scene
*/

#include "rpg.h"

void updated_text_attrib_scene(t_text *list_text, t_rpg *game)
{
    char *text = NULL;
    int i = 0;
    int tab[] = {game->player->attrib->skill_pt,
        game->player->attrib->charisme, game->player->attrib->strenght,
        game->player->attrib->dexterity, game->player->attrib->constitution,
        game->player->attrib->luck, game->player->attrib->intelligence,
        game->player->attrib->defense};
    for (t_text *tmp = list_text->next->next; i < 8; tmp = tmp->next->next) {
        text = my_itoa(tab[i]);
        sfText_setString(tmp->text, text);
        free(text);
        i++;
        if (i == 8) break;
    }
}
