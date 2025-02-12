class Solution {
public:
    int getHeight(TreeNode* node) {
        if (!node) {
            return 0; 
        }
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);
        
        return max(leftHeight, rightHeight) + 1; 
    }

    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true; 
        }
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};