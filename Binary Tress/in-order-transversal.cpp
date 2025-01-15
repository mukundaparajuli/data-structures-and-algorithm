// in order transversal
// left root right

// Time Complexity = 
// Space Complexity = 

void inOrderTransversal(Node node){
    if(node == NULL) return;

    inOrderTransversal(node->left);
    print(node->data);
    inOrderTransversal(node->right);
}