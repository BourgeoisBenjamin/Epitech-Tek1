/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** add_text_to_npc
*/

#include "rpg.h"

int add_text_to_npc(t_npc *npc, char *file)
{
    int fd = open(file, O_RDONLY);
    char *str = NULL;
    t_text *text = NULL;
    sfVector2f pos = {0, 0};

    if (fd == -1)
        return (-1);
    while ((str = get_next_line(fd)) != NULL) {
        text = create_text(str, "ressources/font/karnivor.ttf", pos, 60);
        text->type = TEXT_T;
        if (text == NULL) {
            close(fd);
            free(str);
            return (-1);
        }
        npc->list_text = add_text(npc->list_text, text);
        free(str);
    }
    close(fd);
    return (0);
}
