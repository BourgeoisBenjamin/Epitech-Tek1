/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** init_attrib
*/

#include "rpg.h"

t_attributs *init_attrib(int gender)
{
    t_attributs *attrib = malloc(sizeof(t_attributs));
    if (attrib == NULL)
        return (NULL + my_printe("Error : malloc() failed\n"));
    attrib->skill_pt = 20;
    attrib->life = 100;
    attrib->damage = 0;
    attrib->charisme = 0;
    attrib->strenght = 0;
    attrib->dexterity = 0;
    attrib->constitution = 0;
    if (gender) {
        attrib->luck = 8;
        attrib->intelligence = 4;
        attrib->defense = 3;
    } else {
        attrib->luck = 5;
        attrib->intelligence = 4;
        attrib->defense = 6;
    }
    return (attrib);
}
