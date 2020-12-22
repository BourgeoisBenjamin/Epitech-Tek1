/*
** EPITECH PROJECT, 2019
** anagram
** File description:
** main
*/

#include <anagram.h>

int main(int argc, char **argv)
{
    if (argc != 3) {
        my_putstr("Error: not enough arguments.\n");
        return (84);
    }
    if (anagram(argv[1], argv[2]))
        my_putstr("anagram!\n");
    else
        my_putstr("no anagrams.\n");

    return 0;
}
