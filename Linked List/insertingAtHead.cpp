#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int d) {
    // create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void printNode(Node* &head) {
    if (head == NULL) {
        cout << "The linked list is empty!";
        return;
    }
    Node* temp = head; 
    while (temp != NULL) { 
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* n1 = new Node(10);
    Node* head = n1;

    InsertAtHead(head, 15);
    InsertAtHead(head, 12);
    InsertAtHead(head, 14);
    InsertAtHead(head, 13);

    printNode(head);
    cout << endl;

    return 0;
}
