// Summary of the approach:
// 1. A recursive function `deleteMiddleElement` is used to remove the middle element from the stack.
// 2. The function keeps track of the current recursion depth (`count`) and compares it to the middle index (`N/2`).
// 3. When the middle element is reached, it is removed using `pop()`.
// 4. Before reaching the middle, the top element is temporarily stored and the function is recursively called to process the next element.
// 5. After removing the middle element, the temporarily stored elements are pushed back onto the stack during the backtracking phase of recursion.
// 6. The stack is modified in place, preserving the order of elements except for the middle one, which is removed.


#include<iostream>
#include<stack>
using namespace std;

void deleteMiddleElement(stack<int>&inputStack, int count, int N){
    if(count == N/2){
        inputStack.pop();
        return;
    }
    int temp = inputStack.top();
    inputStack.pop();
    deleteMiddleElement(inputStack, count+1,N);
    inputStack.push(temp);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

   deleteMiddleElement(st, 0, 7);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


}