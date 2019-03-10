  vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        if(!root) return result; // handle corner case
        queue<TreeNode *>myqueue;
        myqueue.push(root);
        while(!myqueue.empty()){
            int size = myqueue.size();
            for(int i = 0; i< size;i++){
                TreeNode *temp = myqueue.front();
                myqueue.pop();
                if(temp->left) myqueue.push(temp->left);
                if(temp->right) myqueue.push(temp->right);
                if(i == size - 1) result.push_back(temp->val);
            }
        }
        return result;
    }
