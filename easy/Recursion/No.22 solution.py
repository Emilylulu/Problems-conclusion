    def flatten(self, nestedList):
        # non-recursive, used stack simulate recursion
        # Write your code here
        stack = [nestedList]
        result = []
        while stack:
            top = stack.pop()
            # because stack is first in last out, need reversed.
            if not isinstance(top,int):
                for i in reversed(top):
                # first iterate, it is not a integer, so need push in to stack.(whole list reversed in stack)
                    stack.append(i)
            else:
                result.append(top)
        return (result)
        
        
    def flatten(self, nestedList):
        # Write your code here
        self.result = []
        self.helper(nestedList)
        return self.result
        
    def helper(self,nestedList):
        if isinstance(nestedList,int):
        # use isinstance to test it is int or not.
            self.result.append(nestedList)
        else:
        # if it is a list, traversal it.
            for i in nestedList:
                self.helper(i)
