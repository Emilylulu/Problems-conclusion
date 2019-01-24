    def letterCombinations(self, digits):
        # write your code here
        n = len(digits)
        
        if n == 0:
            return []
        dic = {'2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
        return self.helper(n,dic,digits)

    def helper(self,n,dic,digits):
        if n == 1:
            string = dic[digits[0]]
            result = []
            for s in string:
                result.append(s)
            return result
        result = []
        result = self.helper(n-1,dic,digits)
        # when get n-1 result, copy needed times(3 or 4), add nth letter.
        sstring = dic[digits[n-1]]
        res = [0] * len(result)
        for ss in range(len(result)):
        # need copy and not change order. ie if result = [a,b,c], then need get[a,a,a,b,b,b,c,c,c] cannot just *3,but use list.
            res[ss] = [result[ss]]*len(sstring)
        result_2 = []
        for i in range(len(res)):
            for j in range(len(sstring)):
            # flatten list
                result_2.append(res[i][j] + sstring[j])
        return result_2
