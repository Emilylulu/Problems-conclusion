    def sortColors(self, nums):
        # write your code here
        zero = 0
        two = len(nums) - 1
        one = 0
        while zero < two and one <= two:
            if nums[one] == 1:
                one += 1
                continue
            elif nums[one] == 0:
                temp = nums[zero]
                nums[zero] = nums[one]
                nums[one] = temp
                one += 1
                zero += 1
            elif nums[one] == 2:
                temp = nums[two]
                nums[two] = nums[one]
                nums[one] = temp
                two -= 1
            
