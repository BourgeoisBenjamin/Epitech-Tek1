/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** init_quest
*/

#include "rpg.h"

t_quest *create_quest_list(t_quest *list, char *str)
{
    t_quest *new = malloc(sizeof(t_quest));
    sfVector2f pos = {20, 980};

    if (new == NULL)
        return (NULL);
    new->text = sfText_create();
    sfText_setString(new->text, str);
    sfText_setPosition(new->text, pos);
    sfText_setFont(new->text,
    sfFont_createFromFile("./ressources/font/karnivor.ttf"));
    sfText_setCharacterSize(new->text, 20);
    sfText_setColor(new->text, sfBlack);
    new->finish = false;
    new->next = NULL;
    list = add_quest_in_list(list, new);
    return (list);
}

t_quest *init_quest(char *filepath)
{
    t_quest *quest = NULL;
    int fd = open(filepath, O_RDONLY);
    struct stat sb;
    char *buffer;
    char **array;
    if (fd == -1) return (NULL);
    if (stat(filepath, &sb) == -1) return (NULL);
    if ((buffer = malloc(sizeof(char) * (sb.st_size + 1))) == NULL)
        return (NULL);
    if (read(fd, buffer, sb.st_size) == -1) return (NULL);
    buffer[sb.st_size] = '\0';
    array = my_str_to_word_array(buffer, '\n');
    free(buffer);
    for (int i = 0; i < get_size_array(array); i++)
        if ((quest = create_quest_list(quest, array[i])) == NULL)
            return (NULL);
    close(fd);
    return (quest);
}
