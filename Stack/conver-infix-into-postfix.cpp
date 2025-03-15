#include<bits/stdc++.h>
#include<stack>

using namespace std;

int getPriority(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return -1;
}

string convertInfixToPostfix(string operation) {
    stack<char> OpStack;
    string PostFixString;

    for (char ch : operation) {
        // If operand, directly append to result
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            PostFixString += ch;
        }
        // If opening parenthesis, push to stack
        else if (ch == '(') {
            OpStack.push(ch);
        }
        // If closing parenthesis, pop until '(' is found
        else if (ch == ')') {
            while (!OpStack.empty() && OpStack.top() != '(') {
                PostFixString += OpStack.top();
                OpStack.pop();
            }
            OpStack.pop(); // Remove '('
        }
        // If operator
        else {
            while (!OpStack.empty() && getPriority(OpStack.top()) >= getPriority(ch) && ch != '^') {
                PostFixString += OpStack.top();
                OpStack.pop();
            }
            OpStack.push(ch);
        }
    }

    // Pop remaining operators from the stack
    while (!OpStack.empty()) {
        PostFixString += OpStack.top();
        OpStack.pop();
    }

    return PostFixString;
}

int main() {
    string operation = "a+b*(c^d-e)";
    cout << "The operation in postfix form is: " << convertInfixToPostfix(operation) << endl;
    return 0;
}
