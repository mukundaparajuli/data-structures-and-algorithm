// a data structures
// work in LIFO principle = Last In First Out

// operations
// push
// pop
// peek
// empty


// creating a stack
// stack<int> S;
// push = S.push();
// pop = S.pop();
// peek/top = S.peek();
// empty = S.empty();


// stack implementation using stl
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> S;

    S.push(2);
    cout<<"the element at the top is "<<S.top()<<endl;
    S.pop();
    cout<<"is the stack empty "<<S.empty();
}
