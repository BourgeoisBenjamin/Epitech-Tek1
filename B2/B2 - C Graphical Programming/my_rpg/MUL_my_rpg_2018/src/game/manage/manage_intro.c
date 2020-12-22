/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** manage_intro
*/

#include "rpg.h"

int manage_intro2(t_rpg *game, float seconds)
{
    if (seconds > 16)
        delete_transparency_text(game->scenes_array[INTRO]->texts->next
        ->next->next, 4);
    if (seconds > 7)
        if (manage_all_particle_system(game->scenes_array[INTRO]
            ->system) == -1)
            return (-1);
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        seconds = 22;
    if (seconds > 20)
        start_game1(game);
    return (0);
}

int manage_intro(t_rpg *game)
{
    float seconds = get_elapsed_time(game->scenes_array[INTRO]->clock);
    if (seconds < 4)
        add_transparency_text(game->scenes_array[INTRO]->texts, 4);
    if (seconds > 4 && seconds < 8) {
        delete_transparency_text(game->scenes_array[INTRO]->texts, 4);
        delete_transparency_objs(game->scenes_array[INTRO]->objs->next, 1);
        add_transparency_text(game->scenes_array[INTRO]->texts->next, 4);
    }
    if (seconds > 8 && seconds < 12) {
        delete_transparency_text(game->scenes_array[INTRO]->texts->next, 4);
        add_transparency_text(game->scenes_array[INTRO]->texts->next->next, 4);
    }
    if (seconds > 12 && seconds < 16) {
        delete_transparency_text(game->scenes_array[INTRO]->texts
        ->next->next, 4);
        add_transparency_text(game->scenes_array[INTRO]->texts->next
        ->next->next, 4);
    }
    return (manage_intro2(game, seconds));
}
