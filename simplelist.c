#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int main() {
    struct listNode* list = NULL;

    int n;

    srand(time(NULL));

    printf("Enter the number of random elements you want to include in the list: ");
    scanf("%d", &n);

    for (int i=0; i < n; i++) list = insertAtHead(list, rand() % 1000);

    printf("\nPrinting a list of random elements: ");
    printList(list);

    printf("\nEnter an integer to insert at the end of the list: ");
    scanf("%d", &n);
    list = insertAtTail(list, n);

    printf("\nPrinting the list again: ");
    printList(list);

    printf("\nEnter a number to remove it (its first appearance) from the list: ");
    scanf("%d", &n);
    list = removeNode(list, n);

    printf("\nPrinting the list again: ");
    printList(list);

    printf("\nDeleting the list...");
    clearList(&list);
    printf(" Deleted!\n");
}