#include<iostream>
#include<stack>
using namespace std;

void addElementToTheButtom(stack<int>&inputStack, int element){
    // base case
    if(inputStack.empty()){
        inputStack.push(element);
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();
    addElementToTheButtom(inputStack, element);
    inputStack.push(temp);
}

int main(){
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.push(7);

    addElementToTheButtom(stk, 13);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
}