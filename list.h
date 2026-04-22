#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

struct listNode {
    int data;
    struct listNode* next;
};

struct listNode* insertAtHead (struct listNode* list, int data);
struct listNode* insertAtTail (struct listNode* list, int data);
struct listNode* removeNode (struct listNode* list, int data);
void printList (struct listNode* list);
void clearList (struct listNode** list);

#endif