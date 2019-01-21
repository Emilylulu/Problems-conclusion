    def maxDepth(self, root):
        # write your code here
        if not root:
            return 0
        
        dleft = self.maxDepth(root.left)
        dright = self.maxDepth(root.right)
        return max(dleft,dright) + 1
