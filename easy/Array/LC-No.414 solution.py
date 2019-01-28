    def thirdMax(self, nums):
        nums = set(nums)
        if len(nums) < 3:
            return max(nums)
        nums.remove(max(nums))
        nums.remove(max(nums))
        return max(nums)
        
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # third max need distinct each other. so use set() to do this
        # when change values in result, also add value when dose not have this value.
        if len(nums) < 3:
            return max(nums)
        min_value = -sys.maxsize-1
        result = nums[:3]
        ind = 3
        while len(set(result)) < 3 and ind < len(nums):
            if result[0] == result[1] or result[0] == result[2]:
                result[0] = nums[ind]
            if result[1] == result[2]:
                result[1] = nums[ind]
            ind += 1
        if ind == len(nums) and len(set(result)) < 3:
            return max(nums)
        for i in range(ind,len(nums)):
            if nums[i] > min(result) and nums[i] not in result:
                min_ind = np.argmin(result)
                result[min_ind] = nums[i]
        return min(result)
