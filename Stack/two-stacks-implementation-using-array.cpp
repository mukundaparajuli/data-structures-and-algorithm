#include<iostream>
using namespace std;

class TwoStack{
    int size;
    int top1;
    int top2;
    int* arr;

    public:
        TwoStack(int size){
            this->size = size;
            arr = new int[size];
            top1 =-1;
            top2 =size;
        }

        void push1(int element){
            // first check if at least one space is empty to push an element
            if((top2-top1)>=1){
                top1++;
                arr[top1]= element;
            }else {
                cout<<"Stack Overflow"<<endl;
            }
        }

        void push2(int element){
            // first check if at least one space is empty to push an element
            if(top2-top1>= 0){
                top2--;
                arr[top2]= element;
            }else{
                cout<<"Stack Overflow"<<endl;
            }
        }

        void pop1(){
            // check if any element has beeen pushed to stack one or not
            if(top1>=0){
                top1--;
            }else{
                cout<<"Stack One is empty."<<endl;
            }
        }

        void pop2(){
            // check if any element has been added to the stack or not
            if(top2<size){
                top2++;
            }else{
                cout<<"Stack Two is empty."<<endl;
            }
        }

        int peek1(){
            if(top1>=0){
                return arr[top1];
            }else{
                cout<<"Stack is empty."<<endl;
            }
        }

        int peek2(){
            if(top2<size){
                return arr[top2];
            }else{
                cout<<"Stack is empty."<<endl;
                return -1;
            }
        }

        bool isEmpty1(){
            if(top1<0){
                return true;
            }else{
                return false;
            }
        }

        bool isEmpty2(){
            if(top2<size){
                return true;
            }else{
                return false;
            }
        }
};

int main(){
    TwoStack st(8);

    st.push1(9);
    st.push1(9);
    st.push1(9);
    st.push1(9);
    st.push1(9);
    st.push1(9);
    st.push1(9);
    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;
    st.push1(9);
    st.push2(0);
}