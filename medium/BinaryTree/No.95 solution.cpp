class ReturnType{
public:
    bool isBST;
    TreeNode * minNode;
    TreeNode *maxNode;
    ReturnType(){
        minNode = NULL;
        maxNode = NULL;
        isBST = true;
    }
};

class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if the binary tree is BST, or false
     */
    ReturnType helper(TreeNode *root){
        ReturnType result;
        if(!root) return result; // corner case, if root == NULL
        ReturnType left = helper(root->left); // go to left tree
        ReturnType right = helper(root->right); // go to right tree
        if(!left.isBST || !right.isBST){ // if subtree is not BST, then it is not BST
            result.isBST = false;
            return result;
        }
        if(left.maxNode && left.maxNode->val >= root->val) { //if maxNode of left subtree larger or equal to root val
            result.isBST = false;
            return result;
        }
        if(right.minNode && right.minNode->val <= root->val){ //if minNode of right subtree smaller or equal to root val
            result.isBST = false;
            return result;
        }
        result.isBST = true; // if corner case above are not happen assign result values
        result.minNode = left.minNode == NULL ?  root:left.minNode;
        result.maxNode = right.maxNode == NULL ? root:right.maxNode;
        return result;
    }
    bool isValidBST(TreeNode * root) {
        // write your code here
        if(!root) return true; // handle corner case, if root is empty
        ReturnType result = helper(root);
        return result.isBST;
    }
};
