#include<iostream>

using namespace std;

class Stack{
    int size;
    int *arr;
    int top =-1;

    public:
        Stack(int size){
            this->size = size;
            arr = new int[size];
        }

        void push(int element){
            // check if the stack is full or not and only push if the array is not full
            if(size - top > 1){
                top++;
                arr[top] = element;
            }else {
                cout<<"Stack overflow."<<endl;
            }
        }

        void pop(){
            // check if stack is empty or not
            if(top>=0){
                top--;
            }else{
                cout<<"Stack is empty."<<endl;
            }
        }

        int peek(){ 
            // check if stack is not empty
            if(top >= 0){
                return arr[top];
            }else{
                cout<<"Stack is empty."<<endl;
            }
        }

        bool isEmpty(){
            if (top < 0){
                return true;
            }else{
                return false;
            }
        }
};

int main(){
    Stack s(5);
    s.push(1);
    cout<<"the element at the top is: "<<s.peek()<<endl;
    s.push(100);
    cout<<"the element at the top is: "<<s.peek()<<endl;
    s.pop();
    cout<<"the element at the top is: "<<s.peek()<<endl;

    cout<<endl<<endl;

    cout<<"lets check if stack is empty or not"<<endl;
    cout<<"is stack empty? "<<s.isEmpty()<<endl;

    s.pop();

    cout<<"is stack empty? "<<s.isEmpty()<<endl;

    return 0;
}
