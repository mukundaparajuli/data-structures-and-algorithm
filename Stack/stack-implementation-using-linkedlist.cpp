#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

class Stack {
    Node* top;

    public:
        Stack() {
            top = nullptr;
        }

        void push(int data) {
            Node* newNode = new Node(data);
            if (!top) {
                top = newNode;
            } else {
                newNode->next = top;
                top = newNode;
            }
        }

        void pop() {
            if (!top) {
                cout << "Stack underflow!" << endl;
                return;
            }
            Node* temp = top;
            top = top->next;
            delete temp;
        }

        int peek() {
            if (!top) {
                cout << "Stack is empty!" << endl;
                return -1; // Return an invalid value to indicate the stack is empty
            }
            return top->data;
        }

        bool isEmpty() {
            return top == nullptr;
        }

        void display() {
            if (!top) {
                cout << "Stack is empty!" << endl;
                return;
            }
            Node* temp = top;
            while (temp) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack elements: ";
    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Stack after pop: ";
    stack.display();

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
