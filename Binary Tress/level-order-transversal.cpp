// TC = O(N)
// SC = O(N)

#include<bits/stdc++.h>
#include<vector>

// transverse level wise
vector<vector<int>> levelOrderTransversal(TreeNode* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans; //check if root is NULL if yes return the ans

    queue<TreeNode*> q;     //create a queue
    q.push(root);       //push the root value passed into that queue

// untill the queue is empty perform the following
    while(!q.emtpy()){
        // get the size of the queue
        int size = q.size();

        // declare a variable named level to store the values at a given level
        vector<int> level;

        // iterate through the queue
        for(int i=0; i<size; i++){

            // create a node with the value at the front of the queue
            TreeNode* node = q.front();

            // remove that element from the queue
            q.pop();

            // check if the node formed from the element is pointing to NULL at left
            // if not push the left side of the node to the queue
            if(node->left != NULL) q.push(node->left);
            // check if the node formed from the element is pointing to NULL at right
            // if not push the right side of the node to the queue
            if(node->right != NULL) q.push(node->right);

            // push back the data at that node to the array or vector level
            level.push_back(node->data);

            // perform this for all the elements in the queue as the elements are added to the queue
        }

        // push the elements at that particular level to the ans
        ans.push_back(level);
    }

    // finally return the ans
    return ans;
}
