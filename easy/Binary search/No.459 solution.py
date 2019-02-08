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
        # write binary search from scratch.
        left = 0
        right = len(A) - 1
        if len(A) <= 1:
            return 0
        while(left <= right):
            mid = int((left + right) / 2)
            if A[mid] == target:
                return mid
            if A[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        # print(left,right)
        if left == 0:
            if abs(A[0] - target < abs(A[1] - target)):
                return 0
            else:
                return 1
        elif right == len(A) - 1:
            if abs(A[right] - target) < abs(A[right - 1] - target):
                return right
            else:
                return right - 1
        else:
        # can not import numpy so can not use minarg()
            min_val = min(abs(A[left] - target), abs(A[left - 1] - target), abs(A[left + 1] - target))
            if abs(A[left] - target) == min_val:
                return left
            if abs(A[left - 1] - target) == min_val:
                return left - 1
            else:
                return left + 1
