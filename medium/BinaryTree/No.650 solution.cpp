  void helper(TreeNode *&cur, vector<int> & level){ // has to have & for cur and level, since it will change value in function
        if(cur->left == NULL && cur->right ==NULL){
            level.push_back(cur->val);
            cur=NULL; //delete the node
        }else{
            if(cur->left) helper(cur->left,level);
            if(cur->right) helper(cur->right,level);
        }     
    }
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>>result;
        //if(!root) return result;
        while(root){
            vector<int>level;
            helper(root,level);
            result.push_back(level);
        }
        return result;
    }
