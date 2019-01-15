    def isBalanced(self, root):
        # write your code here
        balanced,_ = self.validate(root)
        return balanced
    def validate(self,root):
        if not root:
            return True,0
        balanced,left = self.validate(root.left)
        if not balanced:
            return False,0
        balanced,right = self.validate(root.right)
        if not balanced:
            return False,0
        if abs(left-right) <= 1:
            return True,max(left, right) + 1
        else:
            return False,0
