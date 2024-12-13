#include<iostream>
using namespace std;


class LinkedListNode{
    public:
        int data;
        LinkedListNode* next;

    LinkedListNode(int data){
        this->data=data;
        this->next=NULL;
    }
    };
int main(){
    LinkedListNode* N1 =new LinkedListNode(10);
    cout<<"Data=" <<N1->data<<endl;
    cout<<"Next=" <<N1->next<<endl;

    return 0;
}