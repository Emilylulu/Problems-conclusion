def read(self, buf, n):
        """
        :type buf: Destination buffer (List[str])
        :type n: Number of characters to read (int)
        :rtype: The number of actual characters read (int)
        """
        result = 0
        while n > 0:
            temp = [''] * 4
            length = read4(temp)
            if not length:
                break
            for i in range(min(length,n)):
            # cannot use append method to assign buf, need directly assign value
                buf[result] = temp[i]
                result += 1
                n -= 1
        return result
