#include <bits/stdc++.h> // Includes all standard headers for competitive programming

using namespace std;

// Definition of a Node for the linked list
struct Node {
    public:
    int data;       // Value stored in the current node
    Node* next;     // Pointer to the next node in the linked list

    public:
    // Constructor to initialize a Node with data and optionally a pointer to the next node
    Node(int data1, Node* next1 = nullptr) {
        data = data1;   // Assign the value to the current node
        next = next1;   // Assign the pointer to the next node (default is nullptr)
    }
};

/**
 * Function to convert an array into a linked list.
 * 
 * @param arr - A reference to a vector of integers that needs to be converted.
 * @return Node* - A pointer to the head of the newly created linked list.
 */
Node* convertArr2LL(vector<int> &arr) {
    // Step 1: Create the first node (head) using the first element of the array
    Node* head = new Node(arr[0]);
    cout<<"head="<<head;

    // Step 2: Use a 'mover' pointer to link and traverse through the list
    Node* mover = head;

    // Step 3: Iterate through the remaining elements of the array
    for (int i = 1; i < arr.size(); i++) {
        // Create a new node for the current element
        Node* temp = new Node(arr[i]);

        // Link the current node (pointed by 'mover') to this new node
        mover->next = temp;

        // Move 'mover' to the newly created node
        mover = temp;
    }

    // Step 4: Return the head pointer of the linked list
    return head;
}

/**
 * Function to calculate the length (number of nodes) of the linked list.
 * 
 * @param head - The head pointer of the linked list.
 * @return int - The length of the linked list.
 */
int LengthOfLL(Node *head){
    Node* temp;       // Declare a temporary pointer to traverse the linked list
    temp = head;      // Start traversal from the head node
    int cnt = 0;      // Initialize a counter variable to count the nodes

    // Traverse through the linked list and count the nodes
    while (temp) {
        temp = temp->next;   // Move to the next node
        cnt++;               // Increment the counter
    }

    // Return the total count of nodes
    return cnt;
}

/**
 * Function to check if a specific value exists in the linked list.
 * 
 * @param head - The head pointer of the linked list.
 * @param value - The value to search for in the linked list.
 * @return int - 1 if the value exists, 0 if it does not exist.
 */
int checkIfExists(Node* head, int value){
    Node* temp = head; // Start from the head node

    // Traverse through the linked list to check if the value exists
    while (temp) {
        // If the current node's data matches the value, return 1 (value found)
        if (temp->data == value) return 1;

        // Move to the next node in the list
        temp = temp->next;
    }

    // If we reach here, the value was not found, so return 0
    return 0;
}

/**
* Function to delete the head of the Linked List
*
* @param head - The head pointer of the Linked List.
* @return Node* head - The head of the new Linked List.
*
**/
Node* deleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp= head;
    head= head->next;
    free(temp);
    return head;
}


/**
    Delete the tail element of the Linked List
    @param head - The head pointer of the Linked List
    @return Node* head - The head of the new Linked List
    
 */

Node* deleteTail(Node* head){
    if(head==nullptr || head->next == nullptr) return NULL;
    Node* temp= head;
    while(temp->next->next!= nullptr){
        temp=temp->next;
    }
    free(temp->next);
    temp->next= nullptr;
    return head;
}


// remove kthe element in the linkedlist
Node* removeK(Node* head, int k){
    if(head==NULL ) return head;
    Node* temp= head;
    Node* prev= NULL;

    if(k==1){
        Node* temp= head;
        head= head->next;
        free(temp);
        return head;
    }

    int cnt=1;
    while(temp!=NULL){
        if(cnt==k){
            prev->next=prev->next->next;
            break;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    return head;
}


// remove an element in the linked list
Node* removeEl(Node* head, int el){
    if(head==NULL) return head;

    Node* temp=head;
    // if the given elementis head remove the head
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        free(temp);
    }

    Node* prev= NULL;
    while(temp!=NULL){
        if(temp->data == el){
            prev->next= prev->next->next;
            break;
        }

        prev=temp;
        temp= temp->next;
    }
    return head;
}
int main() {
    // Example 1: Create a single test node
    Node *x = new Node(2, nullptr); // This is an individual node (this line isn't necessary for the main logic)

    // Example 2: Convert a vector to a linked list
    vector<int> arr = {1, 2, 3, 4, 5};  // Input array
    Node* head = convertArr2LL(arr);    // Convert array to linked list

    // Print the data stored in each node of the linked list (Traverse through the linked list)
    Node* temp = head;       // Initialize a pointer 'temp' to point to the head of the linked list
    while (temp) {           // Loop continues as long as 'temp' is not null (i.e., until the end of the linked list)
        cout << temp->data << " "; // Print the data value of the current node
        temp = temp->next;         // Move 'temp' to the next node in the linked list
    }

    cout << endl;

    // Print the length of the linked list
    cout << "The count is " << LengthOfLL(head) << endl; // Calls LengthOfLL to count the nodes in the list

    // Check if a specific value exists in the linked list
    cout << "Let's check if 8 exists: " << checkIfExists(head, 8) << endl; // Returns 0 (value 8 is not in the list)
    cout << "Let's check if 4 exists: " << checkIfExists(head, 4) << endl; // Returns 1 (value 4 is in the list)

    // delete the head
        cout<<"The LL after deleting the head is";
//    { Node* temp = deleteHead(head);       // Initialize a pointer 'temp' to point to the head of the linked list
//     while (temp) {           // Loop continues as long as 'temp' is not null (i.e., until the end of the linked list)
//         cout << temp->data << " "; // Print the data value of the current node
//         temp = temp->next;         // Move 'temp' to the next node in the linked list
//     }}


cout<<endl;


    // delete the tail
//         cout<<"The LL after deleting the tail is";
//    { Node* temp = deleteTail(head);       // Initialize a pointer 'temp' to point to the head of the linked list
//     while (temp) {           // Loop continues as long as 'temp' is not null (i.e., until the end of the linked list)
//         cout << temp->data << " "; // Print the data value of the current node
//         temp = temp->next;         // Move 'temp' to the next node in the linked list
//     }}


// remove nth element in the linked list
// cout<<"The linked list after deleting the kth element is: ";
// {
//     Node* temp= removeK(head, 2);
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// remove an element in the linked list
cout<<"The linked list after deleting the element 5 is: ";
{
    Node* temp= removeEl(head, 5);
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

    return 0;
}
