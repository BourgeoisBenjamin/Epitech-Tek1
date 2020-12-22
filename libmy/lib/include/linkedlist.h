/*
** EPITECH PROJECT, 2018
** linkedlist.h
** File description:
** prototypes of linkedlist
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct list_s
{
    struct node_s *start;
    int len;
    void (*delete_node)(struct node_s*);
} list_t;

typedef struct node_s
{
    void *data;
    struct node_s *next;
} node_t;

list_t *init_list(void (*delete_node)(node_t*));
node_t *create_node(void *data);
list_t *add_node_beg(list_t *list, node_t *new);
list_t *add_node_end(list_t *list, node_t *new);
void delete_list(list_t *list);
void delete_node_pos(list_t *list, int pos);

#endif
