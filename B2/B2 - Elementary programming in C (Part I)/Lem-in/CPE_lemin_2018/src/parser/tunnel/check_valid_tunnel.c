/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** check_valid_tunnel
*/

#include <lemin.h>

char **check_valid_tunnel(char *line)
{
    char **info_tab_c = my_str_to_word_array(line, '#');
    if (info_tab_c == NULL)
        return (NULL);
    char **info_tab_s = my_str_to_word_array(info_tab_c[0], ' ');
    free_array(info_tab_c);
    if (info_tab_s == NULL)
        return (NULL);
    char **info_tab = my_str_to_word_array(info_tab_s[0], '-');
    free_array(info_tab_s);
    if (info_tab == NULL)
        return (NULL);
    if (get_size_array(info_tab) != 2) {
        free_array(info_tab);
        return (NULL);
    }
    return (info_tab);
}
