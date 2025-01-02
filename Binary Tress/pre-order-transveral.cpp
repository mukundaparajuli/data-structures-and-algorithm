// pre order transversal
// root left right


//  Time Complexity = O(N)
// Space Complexity = O(N)
void preOrderTransversal(Node node){
    if(node == NULL);

    print(node->data);

    preOrderTransversal(node->left);
    preOrderTransversal(node->right);
}