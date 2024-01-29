#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("Mukunda");
    s.push("Ramesh");
    s.push("Harish");

    cout << "The element at the top is " << s.top() << endl;

    s.pop();

    cout << "The element at the top is " << s.top() << endl;

    cout << "the size of the stack is " << s.size() << endl;

    cout<<"Is the stack empty? "<<s.empty()<<endl;
}

// Things to conside in stack
// =>follows last in first out method
// =>The element pushed last will be on the top of the stack and vice versa