    def findPeak(self, A):
        # write your code here
        # O(n) TLE
        # # if len(A) < 2 or A[0] >= A[1]:
        # #     return 0
        # length = len(A)
        # # if A[length - 2] <= A[length - 1]:
        # #     return length - 1
        # for i in range(1,length-1):
        #     if A[i] > A[i-1] and A[i] > A[i+1]:
        #         return i
        left = 0
        right = len(A) - 1
        while left < right:
            mid = (left + right) // 2
            if(A[mid] > A[mid-1] and A[mid] > A[mid+1]):
                return mid
            elif A[mid] < A[mid-1]:
                right = mid-1
            else:
                left = mid + 1
        return left
