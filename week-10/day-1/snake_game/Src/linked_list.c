#include "linked_list.h"
//#include <stdlib.h>


void init_list(node_t **head)
{
    *head = NULL;
}


void push_back(node_t **head, coord_t data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    printf("%x \n", (int) new_node);
    new_node->data = data;
    new_node->next = NULL;


    if (*head == NULL) {
        *head = new_node;
        return;
    }


    node_t *p = *head;
    while (p->next != NULL) {
        p = p->next;
    }

    p->next = new_node;
}


void push_front(node_t **head, coord_t data)
{

    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;

    new_node->next = *head;

    *head = new_node;

    return;

}


void insert(node_t **head, coord_t data, node_t *after)
{

    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data.snake_x = data.snake_x;
    new_node->data.snake_y = data.snake_y;


    new_node->next = after->next;
    after->next = new_node;

}


/*void print(node_t *head)
{
    int counter = 0;
    while (head != NULL) {
        printf("%d. %d\n", ++counter, head->data);
        head = head->next;
    }
}*/


int size(node_t *head)
{

    int counter = 0;
    while (head != NULL) {
        ++counter;
        head = head->next;
    }

    return counter;
}


int empty(node_t *head)
{

    if (head) {
        return 0;
    } else {
        return 1;
    }
}


node_t *pop_front(node_t **headptr)
{
    node_t *p = *headptr;
    if (p !=NULL) {
        *headptr = p -> next;
        free((void*)p);
    }
    return *headptr;
}


int search(node_t *head, coord_t value)
{

    //int counter = 0;
    while (head != NULL) {
        // ++counter;
        head = head->next;

        if ((head->data.snake_x == value.snake_x) && (head->data.snake_y == value.snake_y)) {
            return 1;
        }


    }
    return 0;
}


coord_t pop_back(node_t *head)
{
    node_t *p = NULL;

        p = head;


    while (p-> next-> next != NULL) {
        p = p-> next;
    }

    coord_t data = p -> next -> data;
    free((void *) p -> next);
    p-> next = NULL;

    return data;
}
