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

class Queue {
    Node* front;
    Node* rear;

    public:
        Queue() {
            front = nullptr;
            rear = nullptr;
        }

        // Enqueue operation
        void enqueue(int data) {
            Node* newNode = new Node(data);
            if (!rear) { // If the queue is empty
                front = rear = newNode;
            } else {
                rear->next = newNode; // Link the new node to the rear
                rear = newNode;       // Update the rear pointer
            }
        }

        // Dequeue operation
        void dequeue() {
            if (!front) { // Check if the queue is empty
                cout << "Queue underflow!" << endl;
                return;
            }
            Node* temp = front;
            front = front->next; // Move the front pointer to the next node
            if (!front) {        // If the queue becomes empty
                rear = nullptr;
            }
            delete temp; // Free memory of the dequeued node
        }

        // Peek (get front element)
        int peek() {
            if (!front) { // Check if the queue is empty
                cout << "Queue is empty!" << endl;
                return -1;
            }
            return front->data;
        }

        // Check if the queue is empty
        bool isEmpty() {
            return front == nullptr;
        }

        // Display all elements in the queue
        void display() {
            if (!front) {
                cout << "Queue is empty!" << endl;
                return;
            }
            Node* temp = front;
            while (temp) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Queue elements: ";
    queue.display();

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Queue after dequeue: ";
    queue.display();

    cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;

    queue.dequeue();
    queue.dequeue();
    queue.dequeue(); // Trying to dequeue from an empty queue

    return 0;
}
