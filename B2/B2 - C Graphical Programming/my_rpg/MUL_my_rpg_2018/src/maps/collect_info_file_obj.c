/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** collect_info_file_obj
*/

#include "rpg.h"

t_map_obj *create_info_obj(char *buffer)
{
    char **array = my_str_to_word_array(buffer, ':');
    t_map_obj *tempo;

    if (array == NULL)
        return NULL;
    if ((tempo = malloc(sizeof(t_map_obj))) == NULL) {
        free_array(array);
        return NULL;
    }
    tempo->type = array[0][0];
    tempo->pos.x = my_getnbr(array[1]);
    tempo->pos.y = my_getnbr(array[2]);
    tempo->next = NULL;
    free_array(array);
    return tempo;
}

t_map_obj *condition_list_map_obj(t_map_obj *map_obj, char *buffer)
{
    t_map_obj *tempo;

    if (map_obj == NULL) {
        if ((map_obj = create_info_obj(buffer)) == NULL)
            return NULL;
    } else {
        tempo = map_obj;
        while (tempo->next != NULL)
            tempo = tempo->next;
        if ((tempo->next = create_info_obj(buffer)) == NULL) {
            delete_map_obj_info(map_obj);
            return NULL;
        }
    }
    return map_obj;
}

t_map_obj *collect_info_file_obj(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    t_map_obj *map_obj = NULL;
    char *buffer;

    if (fd == -1)
        return NULL;
    while ((buffer = get_next_line(fd)) != NULL) {
        if ((map_obj = condition_list_map_obj(map_obj, buffer)) == NULL)
            return NULL;
        free(buffer);
    }
    close(fd);
    return map_obj;
}
