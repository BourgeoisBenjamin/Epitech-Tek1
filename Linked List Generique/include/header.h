/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** header
*/

#ifndef PROJECT_H
#define PROJECT_H

#include "my.h"

typedef struct list_s
{
    struct node_s *start;
    int len;
} list_t;

typedef struct node_s
{
    void *data;
    struct node_s *next;
} node_t;

void delete_node(node_t *to_delete);

#endif
