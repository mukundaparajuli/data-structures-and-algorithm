#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    public:
        Node(int data,Node* prev,Node* next){
            this-> data= data;
            this-> prev= prev;
            this-> next= next;
        }
};

Node* convertArrToDoublyLL(vector<int> &arr){
    Node* head= new Node( arr[0], nullptr, nullptr);
    Node* prev= head;


    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i], prev, nullptr);
        prev->next = temp;
        prev= temp;
    }
    return head;
}

void print(Node* head){
    Node* temp= head;

    while(temp != nullptr){ 
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



// inserting before the head in the linkedlist
Node* insertBeforeHeadInDoublyLinkedList(Node* head, int value){
    Node* temp= new Node(value, nullptr, head);
    head->prev=temp;

    head =temp;
    return head;
}

// inserting before the tail in the doubly linkedlist
Node* insertBeforeTheTailInDoublyLinkedList(Node* head, int value){
    Node* tail= head;

    while(tail->next !=nullptr){
        tail=tail->next;
    }
    Node* back= tail->prev;

    Node* temp= new Node(value, back, tail);

    back->next= temp;
    tail->prev= temp;

    return head;

}

// insert a value before kth element in doubly linkedlist
Node* insertBeforeKthElementInADoublyLinkedList(Node* head,int k, int value){
    if (head == nullptr || k <= 0) {
        return head;
    }

    Node* KthElement= head;
    
    int cnt=0;
    while(KthElement!= nullptr){
        cnt++;
        if(cnt==k){
         Node* back = KthElement->prev;
         Node* front = KthElement->next;

         if(back==nullptr && front==nullptr){
            Node* temp= new Node(value, nullptr, head);
            head->prev= temp;
            head= temp;
            return head;
         }else if(back==nullptr){
             Node* temp= new Node(value, nullptr, head);
            head->prev= temp;
            head= temp;
            return head;
         }else if(front ==nullptr){
            Node* tail= head;

            while(tail->next !=nullptr){
                tail=tail->next;
            }
            Node* back= tail->prev;

            Node* temp= new Node(value, back, tail);

            back->next= temp;
            tail->prev= temp;

            return head;
         }else{
            Node* temp= new Node(value, back, KthElement);
            back->next= temp;
            return head;
         }
        }
    KthElement=KthElement->next;
    }
}

int main(){
    vector<int> arr={ 1, 4, 2, 45, 54};

    Node* head= convertArrToDoublyLL(arr);
    print(head);

    head= insertBeforeHeadInDoublyLinkedList(head, 44);
    print(head);

    head = insertBeforeTheTailInDoublyLinkedList(head, 499);
    print(head);

    head= insertBeforeKthElementInADoublyLinkedList(head, 4, 69);
    print(head);
}