    def subarraySum(self, nums):
        # write your code here
        result = []
        sum_ = 0
        for i in range(len(nums)):
            sum_ += nums[i]
            result.append(sum_)
        if result[len(result) - 1] == 0:
            return [0,len(result)-1]
        for j in range(len(result)-1):
            if result[j] == 0:
                return [0,j]
            for k in range(j+1,len(result)):
                if result[j] == result[k]:
                    return [j+1,k]
