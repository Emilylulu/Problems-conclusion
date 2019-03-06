    int missingNumber(vector<int>& nums) {
        if(nums.size() == 0) return 1;
        int size = nums.size();
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += nums[i];
        }
        return (size)*(size+1)/2 - sum; // do not forget use *
    }
    
    // soluton 2
        int missingNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end()); // if the nums already sort, can use binary search
        int start = 0;
        int end = nums.size()-1;
        while(start <= end && start <= nums.size()){
            int mid = (end+start)/2;
            if(nums[mid] > mid) end = mid - 1;
            if(nums[mid] <= mid) start = mid + 1;
        }
        return start;
    }
