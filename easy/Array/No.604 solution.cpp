 vector<int> winSum(vector<int> &nums, int k) {
        // write your code here
        int length = nums.size();
        vector <int> result;
        if(k > length || length == 0) return result; // need to handle corner case, k > length or length == 0 and k == 0
        int left = 0;
        int temp = 0;
        for(int i = 0; i < k; i++){
            temp += nums[i]; // 0, k-1 need to calculate first  
        }
        result.push_back(temp);
        for(int i = k; i < length; i++){
            temp = temp - nums[left] + nums[i];
            result.push_back(temp);
            left ++;
        }
        return result;
    }
