/*
** EPITECH PROJECT, 2018
** VM
** File description:
** vm
*/

#include "vm.h"

int get_nb_champions(char **av)
{
    FILE *fd = NULL;
    int count = 0;

    for (int i = 1; av[i] != NULL; i++) {
        fd = get_file(av[i]);
        if (fd != NULL) {
            fclose(fd);
            count++;
        }
    }
    return (count);
}

vm_t **prepare_info(char **argv)
{
    int nb_champions = get_nb_champions(argv);
    vm_t **info = malloc(sizeof(vm_t *) * (nb_champions + 1));

    if (!info)
        return (NULL);
    else if (nb_champions < 2) {
        my_printe("Invalid number of champions. Two min. required.\n");
        return (NULL);
    }
    for (int i = 0; i < nb_champions; i++) {
        info[i] = init_vm();
        if (info[i] == NULL)
            return (NULL);
    }
    info[nb_champions] = NULL;
    return (info);
}

int vm_main(int argc, char **argv)
{
    vm_t **info = prepare_info(argv);

    if (info == NULL)
        return (-1);
    if (parse_arg(argc, argv, info) == -1) {
        delete_all(info);
        return (-1);
    }
    init_champions(info);
    delete_all(info);
    return (0);
}
