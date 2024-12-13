#include <bits/stdc++.h> // Includes all standard headers for competitive programming
using namespace std;

// Node class definition for linked list
class Node {
public:
    int data;     // Data stored in the node
    Node* next;   // Pointer to the next node in the list

    // Constructor to initialize a Node
    Node(int data1, Node* next1 = NULL) {
        data = data1;
        next = next1;
    }
};

// Function to convert an array to a linked list
Node* arrayToLL(vector<int>& arr) {
    // Initialize the head of the linked list with the first element
    Node* head = new Node(arr[0], NULL);

    Node* mover = head; // Pointer to traverse the list

    // Loop through the array and create new nodes for each element
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create a new node
        mover->next = temp;           // Link the current node to the new node
        mover = temp;                 // Move to the new node
    }
    return head; // Return the head of the created linked list
}

// Function to print a linked list
void printLinkedList(Node* head) {
    Node* temp = head; // Pointer to traverse the list

    // Traverse the list and print each node's data
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl << endl; // Print a newline for better readability
}

// Function to insert a new head to the linked list
Node* insertHead(Node* head, int value) {
    // Create a new node and make it the head of the list
    Node* temp = new Node(value, head);
    return temp;
}

// Function to insert a new node at the kth position in the linked list
Node* insertToK(Node* head, int k, int value) {
    // If inserting at the head, call the insertHead function
    if (k == 1) {
        return new Node(value, head);
    }

    Node* temp = head; // Pointer to traverse the list
    Node* prev = NULL; // Pointer to store the previous node

    int count = 1; // Counter to track the current position in the list

    // Traverse the list to find the kth position
    while (temp != NULL) {
        if (count == k) {
            // Create a new node and insert it at the kth position
            prev->next = new Node(value, temp);
            break;
        }
        count++;
        prev = temp;        // Update the previous node
        temp = temp->next;  // Move to the next node
    }

    return head; // Return the modified list
}

// Function to insert a new node at the end of the linked list
Node* insertToLast(Node* head, int value) {
    Node* temp = head;  // Pointer to traverse the list
    Node* prev = NULL;  // Pointer to store the previous node

    // Traverse the list to find the last node
    while (temp != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Create a new node and link it to the last node
    prev->next = new Node(value, NULL);
    return head; // Return the modified list
}

// Main function to test the above functions
int main() {
    // Initialize a vector representing an array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Convert the array to a linked list
    Node* head = arrayToLL(arr);

    // Print the original linked list
    printLinkedList(head);

    // Insert 4 as the head of the linked list
    head = insertHead(head, 4);

    // Print the modified linked list
    printLinkedList(head);

    // Insert 9 as the 4th element in the linked list
    cout << "Inserting 9 as the 4th element in the linked list:" << endl;
    head = insertToK(head, 4, 9);
    printLinkedList(head);

    // Insert 12 as the last element in the linked list
    cout << "Inserting 12 as the last element in the linked list:" << endl;
    head = insertToLast(head, 12);
    printLinkedList(head);

    return 0;
}
