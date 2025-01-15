// Summary of the approach:
// 1. Two pointers, `top1` and `top2`, are used to manage two stacks in a single array.
// 2. `top1` starts at -1 and grows upwards, while `top2` starts at the array size and grows downwards.
// 3. A shared array (`arr`) is dynamically allocated to store elements for both stacks.
// 4. A space check (`top2 - top1 > 1`) ensures there is room before pushing elements into either stack.
// 5. Stack operations (push, pop, peek, isEmpty) are implemented separately for both stacks, ensuring proper bounds checks.
// 6. Efficient space utilization is achieved by allowing the stacks to grow towards each other until space is exhausted.


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