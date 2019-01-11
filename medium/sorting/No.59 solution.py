    def threeSumClosest(self, numbers, target):
        # write your code here
        # one iterator plus two pointer
        length = len(numbers)
        if length < 3:
            return sum(numbers)
        numbers.sort()
        absolute = sys.maxsize
        result = numbers[0]
        for i in range(length-2):
            left = i + 1
            right = length-1
            while left < length and left < right:
                temp = numbers[i] + numbers[left] + numbers[right]
                if temp == target:
                    return target
                elif absolute > abs(temp - target):
                    print(result,absolute)
                    absolute = abs(temp - target)
                    result = temp
                
                elif temp < target:
                    left += 1
                else:
                    right -= 1
        
        return result
