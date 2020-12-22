/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** list function
*/

#include <pushswap.h>

t_list *t_listnew(void)
{
    t_list *new = malloc(sizeof(t_list));
    if (new != NULL) {
        new->length = 0;
        new->start = NULL;
        new->end = NULL;
    }
    return new;
}

t_list *t_list_append(t_list *l_a, int data)
{
    if (l_a != NULL) {
        t_node *new = malloc(sizeof(t_list));
        if (new != NULL) {
            new->data = data;
            new->next = NULL;
            if (l_a->end == NULL) {
                new->back = NULL;
                l_a->start = new;
                l_a->end = new;
            } else {
                l_a->end->next = new;
                new->back = l_a->end;
                l_a->end = new;
            }
            l_a->length++;
        }
    }
    return l_a;
}

t_list *t_list_prepend(t_list *l_a, int data)
{
    if (l_a != NULL) {
        t_node *new = malloc(sizeof(t_list));
        if (new != NULL) {
            new->data = data;
            new->back = NULL;
            if (l_a->end == NULL) {
                new->next = NULL;
                l_a->start = new;
                l_a->end = new;
            } else {
                l_a->start->back = new;
                new->next = l_a->start;
                l_a->start = new;
            }
            l_a->length++;
        }
    }
    return l_a;
}

void t_list_delete(t_list **l_a)
{
    if (*l_a != NULL) {
        t_node *temp = (*l_a)->start;
        while (temp != NULL) {
            t_node *del = temp;
            temp = temp->next;
            free(del);
        }
        free(*l_a);
    }
}

void t_list_display(t_list *l_a)
{
    if (l_a != NULL) {
        t_node *temp = l_a->start;
        while (temp != NULL) {
            my_printf("%i -> ", temp->data);
            temp = temp->next;
        }
    }
    my_printf("NULL\n");
}