/*
** EPITECH PROJECT, 2019
** VM
** File description:
** main
*/

#include "vm.h"

int main(int argc, char **argv)
{
    if (vm_main(argc, argv) == -1)
        return (84);
    return (0);
}
