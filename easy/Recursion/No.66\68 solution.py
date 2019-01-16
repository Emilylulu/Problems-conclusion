    def preorderTraversal(self, root):
        # write your code here
        # root left right 
        result = []
        self.preorder(root,result)
        return result
    def preorder(self,root,result):
        if not root:
            return
        result.append(root.val)
        self.preorder(root.left, result)
        self.preorder(root.right, result)
        
    def postorderTraversal(self, root):
        # write your code here
        # left right root
        result = []
        self.postorder(root,result)
        return result
    def postorder(self,root,result):
        if not root:
            return
        self.postorder(root.left,result)
        self.postorder(root.right,result)
        result.append(root.val)
