/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** add_particle_system
*/

#include "rpg.h"

int get_nb_system(t_particle_info **array)
{
    int size = 0;

    if (array == NULL)
        return (size);

    for (int i = 0; array[i]; i++) {
        size++;
    }
    return (size);
}

t_particle_info **add_particle_system(t_particle_info **array,
t_particle_info *system)
{
    t_particle_info **new = NULL;
    int size = get_nb_system(array);

    if ((new = malloc(sizeof(t_particle_info*) * (size + 2))) == NULL)
        return (delete_particle_system_array(array));

    for (int i = 0; array[i]; i++) {
        new[i] = array[i];
    }
    new[size] = system;
    new[size + 1] = NULL;
    free(array);
    return (new);
}
