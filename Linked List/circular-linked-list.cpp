#include <stdio.h>
#include <stdlib.h>

struct circular_linked_list {
    int item;
    struct circular_linked_list *next;
};
typedef struct circular_linked_list node;

void insertAnElementToLinkedList(int value, node** start, node** last) {
    node* ptr = (node*)malloc(sizeof(node));
    if(ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    ptr->item = value;

    if(*start == NULL) {
        ptr->next = ptr;
        *start = ptr;
        *last = ptr;
    } else {
        ptr->next = *start;
        *last = *last;  // unchanged, but for clarity
        (*last)->next = ptr;
        *start = ptr;
    }
}

void insertAtBeginning(node**start, node**last, int value){
    node* ptr = (node*)malloc(sizeof(node));
    ptr->item= value;

    if(*start == NULL){
        ptr->next = ptr;
        *start = ptr;
        *last = ptr;
    }
    ptr->next= *start;
    *start = ptr;
    (*last)->next = ptr;
}

void insertAtEnd(node**start, node**last, int value){
    node* ptr = (node*)malloc(sizeof(node));
    ptr->item= value;

    if(start == NULL){
        ptr->next = ptr;
        *start = ptr;
        *last = ptr;
    }

    (*last)->next = ptr;
    ptr->next = *start;
}

void printLinkedList(node* start) {
    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }
    node* temp = start;
    do {
        printf("[%d] -> ", temp->item);
        temp = temp->next;
    } while (temp != start);
    printf("(back to start)\n");
}

int main() {
    node* start = NULL;
    node* last = NULL;

    // Convert an array to circular linked list
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        insertAnElementToLinkedList(arr[i], &start, &last);
    }

    printLinkedList(start);
    insertAtBeginning(&start, &last, 9);
    printLinkedList(start);
    insertAtEnd(&start, &last, 7);
    printLinkedList(start);
    return 0;
}
