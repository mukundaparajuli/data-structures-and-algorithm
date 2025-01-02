// post order transversal
// left right root

// Time Complexity = 
// Space Complexity = 

void postOrderTransversal(Node node){
    if(node == NULL) return;

    postOrder(node->left);
    postOrder(node->right);
    print(node->data);
}