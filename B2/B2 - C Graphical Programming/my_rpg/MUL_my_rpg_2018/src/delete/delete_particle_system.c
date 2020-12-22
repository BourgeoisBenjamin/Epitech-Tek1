/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_particle_system
*/

#include "rpg.h"

void delete_particle_system(t_particle_info *system)
{
    if (system == NULL)
        return;
    if (system->system == NULL) {
        free(system);
        return;
    }
    t_particle *current = system->system;
    t_particle *next = NULL;

    while (current != NULL) {
        next = current->next;
        delete_particle(current);
        current = next;
    }
}

void *delete_particle_system_array(t_particle_info **array)
{
    if (array == NULL)
        return (NULL);
    for (int i = 0; array[i]; i++)
        delete_particle_system(array[i]);
    return (NULL);
}
