#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtAnyPosition(Node* &head, int position, int data){
    Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;

    if(head==NULL){
        cout<<"The linked list is empty!"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* n1= new Node(12);
    Node* head=n1;
    insertAtAnyPosition(head, 2, 13);
    insertAtAnyPosition(head, 3, 14);
    insertAtAnyPosition(head, 4, 15);
    insertAtAnyPosition(head, 5, 16);
    print(head);
}