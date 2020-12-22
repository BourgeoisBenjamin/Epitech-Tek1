/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** manage_particle_system
*/

#include "rpg.h"

int check_life_particle(t_particle *particle)
{
    if (particle->lifespan <= 0)
        return (1);
    return (0);
}

int manage_all_particle_system(t_particle_info **system)
{
    for (int i = 0; system[i]; i++) {
        if ((system[i] = manage_particle_system(system[i])) == NULL)
            return (-1);
    }
    return (0);
}

t_particle_info *manage_particle_system(t_particle_info *system)
{
    t_particle *new = NULL;
    t_particle *to_delete = NULL;
    t_particle *tmp = system->system;
    while (tmp) {
        if (check_life_particle(tmp)) {
            to_delete = tmp;
            tmp = tmp->next;
            system->system = remove_particle(system->system, to_delete);
        } else {
            tmp = update_particle(system, tmp);
            tmp = tmp->next;
        }
    }
    if ((new = create_particle(system)) == NULL)
        return (NULL);
    system->system = add_particle(system->system, new);
    return (system);
}
