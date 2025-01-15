// Summary of the approach:
// 1. **Sorting Logic (`sortTheStack`)**:
//    - This function inserts an element into the stack while maintaining the order.
//    - If the top of the stack is smaller than the element, the element is directly pushed onto the stack.
//    - Otherwise, the top element is popped, and the function is called recursively to insert the element. After that, the popped element is pushed back to preserve the stack order.


// 2. **Recursive Sorting Function (`sortWithRecursion`)**:
//    - This function recursively pops the top element of the stack until it is empty.
//    - After popping all the elements, it calls the `sortTheStack` function to insert each element back into the stack in sorted order.
//    - This ensures that elements are reinserted in ascending order when recursion unwinds.


// 3. **Main Function**:
//    - A stack is populated with integers.
//    - The `sortWithRecursion` function is called to sort the stack using recursion.
//    - Finally, the sorted stack is printed by popping the elements from top to bottom.

#include<iostream>
#include<stack>

using namespace std;
void sortTheStack(stack<int> &inputStack,int element){
   if(inputStack.empty() || inputStack.top() <= element) {
        inputStack.push(element);
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();
    sortTheStack(inputStack, element);
    inputStack.push(temp);
}

void sortWithRecursion(stack<int> &inputStack){
    if(inputStack.empty()){
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();
    sortWithRecursion(inputStack);
    sortTheStack(inputStack, temp);
}
int main(){
    stack<int> stk;

    stk.push(1);
    stk.push(-2);
    stk.push(3);
    stk.push(49);
    stk.push(15);
    stk.push(-96);
    stk.push(70);

    sortWithRecursion(stk);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}