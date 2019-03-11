  bool isAncestor(TreeNode *A, TreeNode *B){ // if A is ancestor of B return true otherwise return false
        if(!A) return false;
        queue<TreeNode*>subTree;
        subTree.push(A);
        while(!subTree.empty()){
            int size = subTree.size();
            for(int j = 0; j < size; j++){
                TreeNode *temp = subTree.front();
                subTree.pop();
                if(temp == B) return true;
                if(temp->left) subTree.push(temp->left);
                if(temp->right) subTree.push(temp->right);
            }
        }
        return false;
    }
    TreeNode * lowestCommonAncestor(TreeNode * root, TreeNode * A, TreeNode * B) {
        // write your code here
        queue<TreeNode*> treeQueue;
        if(!root) return NULL;
        if(!A || isAncestor(B,A)) return B;
        if(!B ||isAncestor(A,B)) return A;

        if(root == A && root == B) return root;
        
        treeQueue.push(root);
        while(!treeQueue.empty()){
            int size = treeQueue.size();
            for(int i = 0; i < size; i++){
                TreeNode *temp = treeQueue.front();
                treeQueue.pop();
                
                if(temp->left) {
                    if(!isAncestor(temp->left,A) && isAncestor(temp->left,B)) return temp; // if temp->left is not ancestor of A and B, then temp is LCA
                    treeQueue.push(temp->left);
                }
                if(temp->right) {
                    if(!isAncestor(temp->right,A) && isAncestor(temp->right,B)) return temp; // if temp->right is not ancestor of A and B, then temp is LCA
                    treeQueue.push(temp->right);
                }
                
            }
        }
        return NULL;
    }
