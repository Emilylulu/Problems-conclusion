    def isIsomorphic(self, s, t):
        # write your code here
        # s compare to t, t compare to s check twice.
        dict_1 = {}
        dict_2 = {}
        for i in range(len(s)):
            if s[i] in dict_1:
                if not t[i] == dict_1[s[i]]:
                    return False
            else:
                dict_1[s[i]] = t[i]
        for j in range(len(t)):
            if t[j] in dict_2:
                if not s[j] == dict_2[t[j]]:
                    return False
            else:
                dict_2[t[j]] = s[j]
        return True
        
    def isIsomorphic4(self, s, t): 
        return [s.find(i) for i in s] == [t.find(j) for j in t]
