    def isStrobogrammatic(self, num):
        # write your code here
        dict_ = {'6':'9','8':'8','9':'6','0':'0','1':'1'} # 1 need to check more
        result = ''
        for i in range(len(num)):
            if num[i] not in dict_:
                return False
            temp = dict_[num[i]]
            result += temp
        # reverser string
        result = result[::-1]
        return num == result
