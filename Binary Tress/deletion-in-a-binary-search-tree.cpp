TreeNode* deleteNode(TreeNode* root, int key){
    if(root == NULL) return NULL;

    if(root->val == key) return helper(root);
    TreeNode* dummy = root;


   while(dummy != NULL){
     if(dummy->val >= key){
        // node lies in the left side of the root
        if(dummy->left != NULL && dummy->left->val === key){
            dummy->left = helper(dummy->left);
            break;
        }else{
            dummy = dummy->left;
        }
     }else{
        if(dummy->right != NULL && dummy->right->val == key){
            dummy->right = helper(dummy->right);
            break;
        }else{
            dummy = dummy->right;
        }
     }
    }
    return root;
}

TreeNode* helper(TreeNode* root){
    if(root->left != NULL) return root->right;
    if(root->right != NULL) return root->left;
    TreeNode* rightChild = root->right;
    TreeNode* lastRight = findLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
}

TreeNode* findLastRight(TreeNode* root){
    if(root->right == NULL) return root;
    return findLastRight(root->right);
}