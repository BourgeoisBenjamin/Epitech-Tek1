/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** draw_scene
*/

#include "rpg.h"

void draw_scene(t_player *player, sfRenderWindow *window, t_scenes **scene,
enum scenes current_scene)
{
    sfRenderWindow_clear(window, sfBlack);
    draw_objs(window, scene[current_scene]);
    draw_npc(window, scene[current_scene]->npc);
    draw_player(window, player, current_scene);
    draw_quest(window, scene[current_scene], current_scene);
    draw_particle_system(window, scene[current_scene]);
    draw_buttons(window, scene[current_scene]);
    draw_text(window, scene[current_scene]);
    play_music(scene[current_scene]);
    sfRenderWindow_display(window);
}
