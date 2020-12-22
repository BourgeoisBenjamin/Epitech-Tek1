/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** create_map_first_scene
*/

#include "defender.h"

int check_file(void)
{
    int fd = open_file("maps/map1.txt");
    if (fd == -1)
        return -1;
    char *line = NULL;
    int i = 0;

    while ((line = get_next_line(fd)) != NULL) {
        i++;
        free(line);
    }
    close(fd);
    free(line);
    if (i != 6)
        return (-1);
    return (0);
}

t_game_object *create_map_first_scene(void)
{
    if (check_file() == -1)
        return (NULL);
    int fd = open_file("maps/map1.txt");
    if (fd == -1)
        return NULL;
    char *line = NULL;
    t_game_object *list_obj = NULL;

    while ((line = get_next_line(fd)) != NULL) {
        if (check_map(line) == -1) {
            delete_list_objs(list_obj);
            write(2, "Please keep file valid\n", 47);
            return NULL;
        }
        list_obj = create_map(list_obj, line);
        free(line);
    }
    free(line);
    close(fd);
    return list_obj;
}
