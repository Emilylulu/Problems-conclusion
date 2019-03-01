    vector<vector<int>> levelOrder(TreeNode * root) {
        // write your code here
        if(!root){ //handle corner case
            return {};
        }
        vector<vector<int>> result;
        queue<TreeNode*> myqueue;
        myqueue.push(root);
        while(!myqueue.empty()){
            vector<int> res;
            int size = myqueue.size(); //need to use a varible to store size, since size will change in the for loop
            for(int i = 0; i < size; i++){ //in for loop store this level(pushed in queue earlier) in res. 
                TreeNode *temp = myqueue.front();
                myqueue.pop();
                if(temp->left) myqueue.push(temp->left);
                if(temp->right) myqueue.push(temp->right);
                res.push_back(temp->val);
            }
            result.push_back(res); // after for loop store the res into final result for a whole layer value.
        }
        return result;
    }
