#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "doublelinkedlist.h"

void traverseForward(Node *n)
{
    Node *cur = n;

    printf("\n");

    while (cur != NULL)
    {
        printf("%s\n", cur->data);
        cur = cur->next;
    }
}

void traverseBackward(Node *n)
{
    Node *cur = n;

    printf("\n");

    while (cur != NULL)
    {
        printf("%s\n", cur->data);
        cur = cur->prev;
    }
}

void insertAfter(Node *n, Node *new_node)
{
    new_node->prev = n;
    if (n->next != NULL)
    {
        new_node->next = n->next;
        n->next->prev = new_node;
    }
    n->next = new_node;
}

void insertBefore(Node *n, Node *new_node)
{
    new_node->next = n;
    if (n->prev != NULL)
    {
        new_node->prev = n->prev;
        n->prev->next = new_node;
    }
    n->prev = new_node;
}

Node *findData(Node *head, char *data_to_find)
{
    Node *cur = head;
    while (cur != NULL)
    {
        if (strcmp(cur->data, data_to_find) == 0)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

void deleteNode(Node *n)
{
    if (n->prev != NULL)
    {
        n->prev->next = n->next;
    }

    if (n->next != NULL)
    {
        n->next->prev = n->prev;
    }
}

Node createNode(char *data)
{
    Node n = {data, NULL, NULL};
    return n;
}