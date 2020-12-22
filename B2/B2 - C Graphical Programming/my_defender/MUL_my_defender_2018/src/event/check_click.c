/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** check_click
*/

#include "defender.h"

void check_click(t_game *game)
{
    if (game->event.type == sfEvtMouseButtonReleased) {
        sfMusic_play(game->musics->next->music);
        sfVector2i click_pos = sfMouse_getPositionRenderWindow(game->window);
        t_button *temp = game->scenes_array[game->instance->scene]->buttons;
        while (temp != NULL) {
            if (button_is_clicked(temp, click_pos)) {
                temp->callback(game);
                return;
            }
            temp = temp->next;
        }
    }
}
