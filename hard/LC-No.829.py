    def consecutiveNumbersSum(self, N):
        """
        :type N: int
        :rtype: int
        """
        ans = 0
        for m in range(1,N+1):
            mx = N - int((m*(m-1))/2)
            if mx <= 0:
                break
            if mx % m == 0:
                ans += 1
        return ans
