# solution one, BFS but Time Limit Exceeded
import queue
class Solution:
    """
    @param target: the destination
    @return: the minimum number of steps
    """
    def reachNumber(self, target):
        # Write your code here
        que = queue.Queue()
        que.put(0)
        step = -1
        while not que.empty():
            step += 1
            for i in range(2**step):
                temp = que.get()
                if temp == target:
                    return step
            
                que.put(temp + step + 1)
                que.put(temp - step - 1)
                
                
                
# solution 2
class Solution:
    """
    @param target: the destination
    @return: the minimum number of steps
    """
    def reachNumber(self, target):
        # Write your code here
        target = abs(target)
        s = 0
        result = 0
        while s < target or (target - s)  % 2 == 1:
            result += 1
            s += result
        return result
