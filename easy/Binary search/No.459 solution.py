   import bisect
   def closestNumber(self, A, target):
        # write your code here
        if len(A) <= 1:
            return 0
        ind = bisect.bisect_left(A,target)
        # bisect_left return index after this index is equal or large than target
        # A[low:i] is smaller than target, A[i:high] is equal or larger than target
        # if return value is i
        # print(ind)
        if ind == len(A):
            return ind- 1
        if abs(A[ind- 1] - target) < abs(A[ind] - target):
            return ind - 1
        else:
            return ind
            
            
    def closestNumber(self, A, target):
        # write your code here
        left = 0
        right = len(A) - 1
        if len(A) <= 1 or A[0] >= target:
            return 0
        if A[right] <= target:
            return right
        while(left < right):
            mid = int((left + right) / 2)
            if A[mid] == target:
                return mid
            if A[mid] > target:
                right = mid
            else:
                left = mid + 1
        if target - A[left-1] <= A[left] - target:
            return left - 1
        return left
