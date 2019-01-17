class Solution(object):
    # @param {NestedInteger[]} nestedList a list of NestedInteger Object
    # @return {int} an integer
    def depthSum(self, nestedList):
        # Write your code here
        return self.helper(nestedList,1)
   
    def helper(self,nestedList,depth):
        result = 0
        for i in nestedList:
            if i.isInteger():
                result += depth * i.getInteger() 
            else:
                result += self.helper(i.getList(),depth + 1)
        return result
