#include "list.h"

struct listNode* insertAtHead (struct listNode* list, int data) {
    struct listNode* newNode = (struct listNode*) malloc (sizeof(struct listNode));
    newNode->data = data;
    newNode->next = list;

    return newNode;
}

struct listNode* insertAtTail (struct listNode* list, int data) {
    struct listNode* newNode = (struct listNode*) malloc (sizeof(struct listNode));
    newNode->data = data;
    newNode->next = NULL;

    if (list == NULL) return newNode;

    struct listNode* tempNode = list;
    while (tempNode->next != NULL) tempNode = tempNode->next;
    tempNode->next = newNode;

    return list;
}

struct listNode* removeNode (struct listNode* list, int data) {
    struct listNode* prevNode = NULL;
    struct listNode* currentNode = list;

    while (currentNode != NULL) {
        if (currentNode->data == data) {
            if (prevNode != NULL) prevNode->next = currentNode->next;
            else list = currentNode->next;
            free(currentNode);
            return list;
        }

        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    return list;
}

void printList (struct listNode* list) {
    while (list != NULL) {
        printf("%d -> ", list->data);
        list = list->next;
    }
    printf("NULL");
}

void clearList (struct listNode** list) {
    struct listNode* prevNode;
    while (*list != NULL) {
        prevNode = *list;
        *list = (*list)->next;
        free(prevNode);
    }

    *list = NULL;
}