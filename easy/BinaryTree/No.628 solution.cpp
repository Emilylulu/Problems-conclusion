public:     
     int helper(TreeNode *root){
         if(root == NULL){ // corner case, can not use left node return root->val, since it will never calculate leaf node
             return 0;
         }
         int left = 0;
         int right = 0;
         if(root->left) left = helper(root->left);
         if(root->right) right = helper(root->right);
         int sum = left+right+root->val;
         if(sum > maxSum){
             maxSum = sum;
             maxNode = root;
         }
         return sum;
     }
    TreeNode * findSubtree(TreeNode * root) {
        // write your code here
        if(!root || (root->left == NULL && root->right ==NULL)) return root; // handle corner case, NULL or only have one leaf node as root
        helper(root);
        return maxNode;
    }
private:
    int maxSum = INT_MIN;
    TreeNode *maxNode = NULL;
