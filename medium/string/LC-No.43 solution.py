    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        # not overflow using python
        result = 0
        carry1 = 1
        for i in num1[::-1]:
            carry2 = 1
            for j in num2[::-1]:
                result += (int(i) * int(j) * carry1 * carry2)
                carry2 *= 10
            carry1 *= 10
        return str(result)
