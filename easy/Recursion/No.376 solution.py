    def binaryTreePathSum(self, root, target):
        # write your code here
        self.result = []
        self.helper(root,[],target,0)
        return self.result
        
    def helper(self,root,res,target,cur_sum):
        if root == None:
            return
        cur_sum += root.val
        res.append(root.val)
        if cur_sum == target and root.left == None and root.right==None:
            self.result.append(res[:])
        self.helper(root.left,res,target,cur_sum)
        self.helper(root.right,res,target,cur_sum)
        print(res)
        # make sure to find short path and not include previous path
        res.pop()
