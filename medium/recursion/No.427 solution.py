    def generateParenthesis(self, n):
        # write your code here
        result = []
        results = []
        self.helper(n,n,result,results)
        return results
        
    def helper(self,left,right,result,results):
        if right == 0 and left == 0:
            results.append(''.join(result))
        if left > 0:# if there left some left parenthesis then add left to it. 
            result.append('(')
            self.helper(left-1,right,result,results)
            result.pop()
        if right > left:# if there left some right parenthesis and right > left, add right to it
            result.append(')')
            self.helper(left,right-1,result,results)
            result.pop()
