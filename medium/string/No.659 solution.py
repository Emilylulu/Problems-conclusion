    def encode(self, strs):
        # write your code here
        # in case string has some special character, put the separate char in each beginning.
        res = ''
        for i in strs:
        # use length info
            res += str(len(i))
            res += '#'
            res += i
            
        return res

    """
    @param: str: A string
    @return: dcodes a single string to a list of strings
    """
    def decode(self, str):
        # write your code here
        result = []
        string = ''
        i = 0
        while i < len(str):
            length = 0
            # print(str)
            while not str[i] == '#': # read length info handle multiple digits situation
                length = length * 10 + int(str[i])
                i += 1
            i += 1 # get away of '#'
            # print(str)
            result.append(str[i:i + length])
            i = i + length
        return result
