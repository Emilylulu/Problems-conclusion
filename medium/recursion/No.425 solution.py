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

    
    #solution 2: dfs
    def letterCombinations(self, digits):
        # write your code here
        self.dic = {'2':['a','b','c'], '3':['d','e','f'], '4':['g','h','i'], '5':['j','k','l'], '6':['m','n','o'],'7':['p','q','r','s'],'8':['t','u','v'],'9':['w','x','y','z']}
        self.result=[]
        if len(digits) == 0:
            return self.result
        self.dfs(digits,'',0)
        return self.result
        
    def dfs(self,digits,string,ind):
        if ind == len(digits):
            self.result.append(string)
            return
        for letter in self.dic[digits[ind]]:
            self.dfs(digits,string+letter,ind+1)
