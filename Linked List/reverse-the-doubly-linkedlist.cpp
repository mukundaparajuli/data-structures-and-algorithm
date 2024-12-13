#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int data, Node* prev= nullptr, Node* next = nullptr){
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};


Node* convertArrToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],prev );
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// extreme method
// reverse the doubly linkedlist
Node* reverseTheDLL(Node* head){
    Node* temp = head;
    stack<int> st;

    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != nullptr){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

// swapping method
Node* reverseTheDLLSwappingMethod(Node* head){
    Node* current = head;
    Node* last = nullptr;

    while( current != nullptr){
        last = current->prev;
        current->prev = current->next;
        current->next = last;
        current = current->prev;
    }
    return last->prev;
}

int main(){
    vector<int> arr={23, 21, 38, 40, 34, 54};
    Node* head = convertArrToDLL(arr);
    print(head);

    head = reverseTheDLL(head);
    print(head);
   
    head = reverseTheDLLSwappingMethod(head);
    print(head);
}