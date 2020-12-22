/*
** EPITECH PROJECT, 2018
** Sort_Words
** File description:
** list function
*/

#include <sort_words.h>

t_list *t_listnew(void)
{
    t_list *new = malloc(sizeof(t_list));
    if (new != NULL) {
        new->length = 0;
        new->start = NULL;
    }
    return new;
}

t_list *t_list_append(t_list *l_words, char *word, int j)
{
    t_node *new = malloc(sizeof(t_node));
    t_node *temp = l_words->start;
    if (new != NULL) {
        new->word = malloc(sizeof(char) * my_strlen(word) + 1);
        my_strncpy(new->word, word, j);
        new->next = NULL;
        if (l_words->start == NULL) {
            l_words->start = new;
            l_words->length++;
            return l_words;
        }
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
        l_words->length++;
    }
    return l_words;
}

void t_list_swap(t_list *l_words, int pos1, int pos2)
{
    t_node *temp1;
    t_node *temp2;
    t_node *temp = l_words->start;
    int i = 1;

    while (i < pos1) {
        temp = temp->next;
        i++;
    }
    temp1 = temp;
    temp = l_words->start;
    i = 1;
    while (i < pos2) {
        temp = temp->next;
        i++;
    }
    temp2 = temp;
    t_list_swap2(l_words, temp1, temp2); 
}

void t_list_delete(t_list **l_words)
{
    if (*l_words != NULL) {
        t_node *temp = (*l_words)->start;
        while (temp != NULL) {
            t_node *del = temp;
            temp = temp->next;
            free(del);
        }
        free(*l_words);
    }
}

void t_list_display(t_list *l_words)
{
    if (l_words != NULL) {
        t_node *temp = l_words->start;
        while (temp != NULL) {
            my_printf("%s", temp->word);
            if (temp->next == NULL)
                my_printf("\n");
            else
                my_printf(" ");
            temp = temp->next;
        }
    }
}
