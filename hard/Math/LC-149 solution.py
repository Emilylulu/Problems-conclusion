    def maxPoints(self, points: 'List[Point]') -> 'int':
        max_num = 0
    
        if len(points) <= 2:
            # corner case if less than 3 points
            return len(points)
        for i in range(len(points)-1):
            slope = {}
            p = 0
            for j in range(i + 1, len(points)):
                # corner case if x is equal, set slope
                if points[i].x == points[j].x:
                    if points[i].y == points[j].y:
                        # if two points have exactly same coordinates
                        p += 1
                    s = '1'
                else:
                    temp1 = points[i].x-points[j].x
                    temp2 = points[i].y-points[j].y
                    # s = float(temp2) / float(temp1) divide is not enough since sometimes coordinate
                    # is too big so that lose precision.
                    # use string to record this slope info 
                    s = self.maxDivide(temp1, temp2)
                
                if s in slope:
                    slope[s] += 1
                    # slope[s] += p
                else:
                    slope[s] = 2
            # print(slope)        
            if max(slope.values()) > max_num:
                # add number of exactly same points to result
                max_num = max(slope.values()) + p
            if max_num > len(points):
                max_num = len(points)
        return max_num
 

    def maxDivide(self,num1, num2):
        # corner case
        if num2 == 0:
            return '0'
        if (num2 % num1 == 0):
            return str(num2/num1)
        divide = 1
        # if two nums < 0, negative divide negative should be positive
        if num1 < 0 and num2 < 0:
            num1 = abs(num1)
            num2 = abs(num2)
        # find gcd-greatest common divisor
        for i in range(1,min(num1,num2)+1):
            if (num1 % i == 0) and (num2 % i == 0):
                divide = i
        return str(num2/divide) + '/' + str(num1/divide)
