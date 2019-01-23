    def grayCode(self, n):
        # write your code here
        if n == 0:
            return [0]
            
        temp = self.grayCode(n - 1)
        result = temp
        for i in reversed(temp):
        # using bit operation 
            result.append(1 << n-1 | i)
        return result
