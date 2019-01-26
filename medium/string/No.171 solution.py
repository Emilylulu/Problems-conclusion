    def anagrams(self, strs):
        # write your code here
        # change every string to Alphabet order
        result = {}
        strs_2 = []
        # string in alphabet order
        for i in range(len(strs)):
            rr = []
            for j in strs[i]:
                rr.append(j)
            rr.sort()
            string = ''
            for k in rr:
                string += k
            strs_2.append(string)
        res = []
        dict_ = {}
        flag = [0] * len(strs)
        # this flag indicate if this string is anagrams to another this string has add to result or not.
        for ss in range(len(strs_2)):
            if strs_2[ss] in dict_:
                res.append(strs[ss])
                if flag[dict_[strs_2[ss]]] == 0:
                    res.append(strs[dict_[strs_2[ss]]])
                    flag[dict_[strs_2[ss]]] = 1
            else:
            # if not in dict_ store this new key and value is its index
                dict_[strs_2[ss]] = ss
        return res
