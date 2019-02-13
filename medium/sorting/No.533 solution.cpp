    int twoSumClosest(vector<int> &nums, int target) {
        // write your code here
        sort(nums.begin(),nums.end());
        //first sort
        int left = 0;
        int right = nums.size()-1;
        int min_diff = INT_MAX;
        // two pointer to find the closest
        while(left < right){
            int sum = nums[left] + nums[right];
            // all difference is positive, if want to get largest lessor equal than target not use abs but ensure is positive.
            int diff =  abs(target - sum);
            if((diff) < (min_diff)){
                min_diff = diff;
            }
            // if(sum == target){
            //     return 0;
            if(sum > target){
                right--;
            }else{
                left++;
            }
        }
        return min_diff;
    }
