/*
** EPITECH PROJECT, 2018
** Match.c
** File description:
** Project Match Nmatch Epitech 2018
*/

#include <my.h>

int match(char const *s1, char const *s2)
{
    // Si dernier arriver à la fin de s2 alors return 1
    if (*s2 == '\0')
        return 1;
    // Si plusieurs étoiles à la suite, se positionner sur la dernière 
    while (*s2 == '*' && *(s2 + 1) == '*')
        s2 = s2 + 1;
    // Si arriver à la fin de s1 et s2 étoile, augmenter s2 au caractère suivant,
    // et par la suite, si s2 différent de * ou \0, pas match"
    if (*s1 == '\0' && *s2 == '*')
        return (match(s1, s2 + 1));
    // Si s1 = s2 augmenter chaque pointeur de 1
    if (*s1 == *s2)
        return (match(s1 + 1, s2 + 1));
    // si s1 différent de s2 mais que s2 = *, alors avancer s1 jusqu'à la fin
    // de la chaine, avancer s2 jusqu'au caractère après l'étoile et tester
    // ce caractère avec s1, si pas le même reculer s1 grâce au ||
    // une fois même caractère, avancer tant que caractère identique
    if (*s1 != *s2) {
        if (*s2 == '*') {
            return (match(s1 + 1, s2) || match(s1, s2 + 1));
        } else {
            return 0;
        }
    }
    return 1;
}
