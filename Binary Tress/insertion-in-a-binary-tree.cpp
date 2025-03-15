#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* insertIntoBinaryTree(Node* root, int value){
    if(!root) return new Node(value);
    if(root->data == value) return root;
    if(root->data < value){
        // insert it into the left
        insertIntoBinaryTree(root->left, value);
    }else{
        insertIntoBinaryTree(root->right, value);
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    return 0;
}