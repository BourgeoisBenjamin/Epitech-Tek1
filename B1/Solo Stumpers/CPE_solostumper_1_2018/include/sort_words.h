/*
** EPITECH PROJECT, 2019
** Sort_Words
** File description:
** header
*/

#include <my.h>

typedef struct s_node
{
    char *word;
    struct s_node *next;
} t_node;

typedef struct s_list
{
    int length;
    struct s_node *start;
} t_list;

t_list *t_listnew(void);
t_list *t_list_append(t_list *l_words, char *word, int j);
void t_list_delete(t_list **l_words);
void t_list_display(t_list *l_words);
