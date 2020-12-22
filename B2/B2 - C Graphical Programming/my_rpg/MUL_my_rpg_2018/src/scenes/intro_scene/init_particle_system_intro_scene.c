/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_particle_system_intro_scene
*/

#include "rpg.h"

t_particle_info *init_particle_system_intro_scene(void)
{
    t_particle_info *system = NULL;
    sfVector2f position = {1060, 600};
    float size = 5;
    sfColor color = {252, 205, 17, 255};

    system = create_particle_system(color, position, 2, size);
    return (system);
}
