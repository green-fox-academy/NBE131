#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>


typedef struct coord {
  uint8_t snake_x;
  uint8_t snake_y;
}coord_t;


typedef struct node
{
    coord_t data;
    struct node *next;
} node_t;


void init_list(node_t **head);

void push_back(node_t **head, coord_t data);

void push_front(node_t **head, coord_t data);

void insert (node_t **head, coord_t data, node_t* after);

void print(node_t *head);

int size (node_t *head);

int empty (node_t *head);

node_t* pop_front (node_t **headptr);

int search ( node_t* head, coord_t value);

coord_t pop_back(node_t* head);

void deallocate (node_t ** head);

#endif //LINKED_LIST_LINKED_LIST_H


