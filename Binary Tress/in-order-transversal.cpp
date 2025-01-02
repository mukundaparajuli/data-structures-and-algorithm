// in order transversal
// left root right


void inOrderTransversal(Node node){
    if(node == NULL) return;

    inOrderTransversal(node->left);
    print(node->data);
    inOrderTransversal(node->right);
}