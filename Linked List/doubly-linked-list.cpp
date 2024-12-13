#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1 = nullptr, Node* prev1 = nullptr) {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* arrayToDoublyLinkedList(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* deleteTheHeadOfDoublyLinkedList(Node* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

    Node* temp = head;
    head = head->next;
    head->prev = nullptr;

    delete temp;
    return head;
}

Node* deleteTheTailOfDoublyLinkedList(Node* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    Node* newTail = temp->prev;
    newTail->next = nullptr;

    delete temp;
    return head;
}

Node* deleteTheKthElementInDoublyLinkedList(Node* head, int k) {
    Node* temp = head;
    int cnt = 0;

    while (temp != nullptr) {
        cnt++;
        if (cnt == k) {
            Node* prev = temp->prev;
            Node* front = temp->next;

            if (prev == nullptr && front == nullptr) {
                delete temp;
                return nullptr;
            } else if (prev == nullptr) {
                return deleteTheHeadOfDoublyLinkedList(head);
            } else if (front == nullptr) {
                return deleteTheTailOfDoublyLinkedList(head);
            } else {
                prev->next = front;
                front->prev = prev;
                delete temp;
                return head;
            }
        }
        temp = temp->next;
    }
    return head;
}

void deleteAnyNodeInDoublyLinkedList(Node* temp){

    Node* back= temp->prev;
    Node* front= temp->next;

    // if the node is tail
    if(front==nullptr){
        back->next=nullptr;

        temp->prev= nullptr;
        delete temp;
    }

    // in other cases when the given node is not head
    back->next=front;
    front->prev= back;

    temp->prev=temp->next=nullptr;

    delete temp;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 4, 3, 5};

    Node* head = arrayToDoublyLinkedList(arr);
    cout << "The array converted to linked list is as: " << endl;
    print(head);

    head = deleteTheHeadOfDoublyLinkedList(head);
    cout << "The linked list after deleting the head is as: " << endl;
    print(head);

    head = deleteTheTailOfDoublyLinkedList(head);
    cout << "The linked list after deleting the tail is as: " << endl;
    print(head);

    head = deleteTheKthElementInDoublyLinkedList(head, 2);
    cout << "The linked list after deleting the 2nd element is as: " << endl;
    print(head);

    deleteAnyNodeInDoublyLinkedList(head->next);
    cout<<"The linked list after deleting the 2nd ode in the linked list is: "<<endl;
    print(head);



    return 0;
}
