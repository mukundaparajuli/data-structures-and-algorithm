#include<stdio.h>
#include<stdlib.h>

struct list{
    int item;
    struct list *next;
};
typedef struct list node;

void printLinkedList(node* head){
    if(head == NULL){
        return;
    }
    node* temp = head;
    while(temp != NULL){
        printf("[%d | %p ] ->", temp->item, temp->next);
        temp = temp->next;
    }

    printf("\n");
}

node* createLLfromArray(int *arr, int size){
    if(size == 0){
        return NULL;
    }
    node* head = (node*)malloc(sizeof(node));
    head->item = arr[0];
    head->next = NULL;

    node* temp = head;
    for (int i=1; i<size; i++){
        temp->next = (node*)malloc(sizeof(node));
        temp = temp->next;
        temp->item = arr[i];
        temp->next = NULL;
    }

    return head;
}

void insertElementAtN(node* head, int n, int value){
    if( head ==  NULL){
        return;
    }
    printf("%p", head);
    int count = 1;
    node* temp = head;
    while(temp != NULL){
        if(count == n){
            node* ptr = (node*)malloc(sizeof(node));
            ptr->next = temp->next;
            ptr->item = value;
            temp->next = ptr;
            return;
        }
        count++;
        printf("%d \n", temp->item);
        temp = temp->next;
    }
}

node* insertAtHead(node* head, int value){
    node* ptr = (node*)malloc(sizeof(node));
    ptr->item = value;
    ptr->next = head;
    head = ptr;
    return head;
}

node* insertAtTail(node* head, int value){
    node* temp = head;
    while(temp->next != NULL){
        printf("%d \n", temp->item);
        temp = temp->next;
    }
    node* ptr = (node*)malloc(sizeof(node));
    ptr->item = value;
    ptr->next = NULL;
    temp->next = ptr;
    printf("%p \n", temp);
    return head;
}



// delete the head of the linkedlist
node* deleteHead(node* head){
    if(head == NULL) return NULL;
    if(head->next == NULL) 
    {
        free(head);
        return NULL;
    }

    node* temp = head;
    head= head->next;
    temp->next = NULL;
    free(temp);
    return head;
}


// delete the tail of the linkedlist
node* deleteTail(node* head){
    if(head == NULL) return NULL;
    if(head-> next == NULL){
        free(head);
        return NULL;
    }
    node* temp, *prev;
    temp = head;
    prev= temp;
    while( temp->next != NULL){
        prev=temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    return head;
}

// delete the nth element from the list
node* deleteNthElement(node* head, int pos){
    node *temp, *prev;
    temp = head;
    prev = temp;
    int count =1;
    if(pos == 1){
        return deleteHead(head);
    }
    if( head == NULL) return NULL;
    while(temp->next != NULL){
        if(count == pos){
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
        count++;
          }
    return head;
}



int main(){
    node *head;
    int arr[]={5, 4, 3, 21, 34};
     
    head = createLLfromArray(arr, 5); 
    // printLinkedList(head);
    // insertElementAtN(head, 3, 390);
    // printLinkedList(head);
   head = insertAtHead(head, 69);
   printLinkedList(head);
   head = insertAtTail(head, 8);
   printLinkedList(head);
   
   head = deleteHead(head);
   printLinkedList(head);
   
   head = deleteTail(head);
   printLinkedList(head);
   
   head = deleteNthElement(head, 3);
   printLinkedList(head);

    return 0;
}