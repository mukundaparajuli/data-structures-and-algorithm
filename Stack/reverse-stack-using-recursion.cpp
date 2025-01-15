// Summary of the approach:
// 1. **Recursive Function for Adding Element to the Bottom (`addElementToTheButtom`)**:
//    - The function adds an element to the bottom of the stack using recursion.
//    - If the stack is empty, the element is pushed directly onto the stack.
//    - Otherwise, it pops the top element, recursively calls the function to add the element to the bottom, and then pushes the previously popped element back onto the stack to preserve the order.
  
// 2. **Recursive Function for Reversing the Stack (`reverseStackUsingRecursion`)**:
//    - The function reverses the stack using recursion.
//    - It first pops the top element of the stack, recursively reverses the rest of the stack, and then calls `addElementToTheButtom` to insert the popped element at the bottom of the reversed stack.
//    - This ensures that the elements are placed in the reversed order when the recursion unwinds.
  
// 3. **Main Function**:
//    - A stack is created and populated with elements (1 to 7).
//    - The `reverseStackUsingRecursion` function is called to reverse the stack.
//    - Finally, the elements of the reversed stack are printed by popping the elements until the stack is empty.


#include<iostream>
#include<stack>

using namespace std;

void addElementToTheButtom(stack<int>&inputStack, int element){
    if(inputStack.empty()){
        inputStack.push(element);
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();
    addElementToTheButtom(inputStack, element);
    inputStack.push(temp);
}

void reverseStackUsingRecursion(stack<int> &inputStack){
    if(inputStack.empty()){
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();
    reverseStackUsingRecursion(inputStack);
    addElementToTheButtom(inputStack, temp);
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

    reverseStackUsingRecursion(stk);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
}