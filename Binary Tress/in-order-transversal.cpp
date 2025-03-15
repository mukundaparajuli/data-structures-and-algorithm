// in order transversal
// left root right

// Time Complexity = O(n)
// Space Complexity = O(h) where h is the height of the tree

void inOrderTransversal(Node node){
    if(node == NULL) return;

    inOrderTransversal(node->left);
    print(node->data);
    inOrderTransversal(node->right);
}