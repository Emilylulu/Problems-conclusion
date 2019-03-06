  int findLengthOfLCIS(vector<int>& nums) {
        int size = nums.size();
        if(size <= 1) return size; // handle if size <= 1
        int result = 0;
        int i = 0;
        int temp = 1; // if nums is not empty, then increasing sequence start with 1.
        
        while(i<size - 1){
            if(nums[i+1] <= nums[i]){ // do not forget increasing sequence can not be equal
                if(temp > result) result = temp;
                temp = 0;
            }
            temp += 1;
            i++;
        }
        if(temp > result) result = temp; // handle if the last sequence is largest
        return result;
    }
