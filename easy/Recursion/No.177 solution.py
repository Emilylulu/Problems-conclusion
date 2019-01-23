    def sortedArrayToBST(self, A):
        # write your code here
        return self.helper(A)
        
    def helper(self,A):
        if len(A) == 0:
            return None
        if len(A) == 1:
            return TreeNode(A[0])
        mid = int((len(A) - 1) / 2)
        # take care about division in python, it will give you a float, must use int()
        root = TreeNode(A[mid])
        root.left = self.helper(A[:mid])
        root.right = self.helper(A[mid + 1:])
        return root
