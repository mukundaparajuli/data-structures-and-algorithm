#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Inserting at tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create node n1
    Node* n1 = new Node(12);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail, 13);
    insertAtTail(tail, 16);
    insertAtTail(tail, 15);
    insertAtTail(tail, 14);

    printList(head);

    return 0;
}
