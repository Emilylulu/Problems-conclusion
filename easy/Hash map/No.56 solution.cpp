    vector<int> twoSum(vector<int> &numbers, int target) {
        // write your code here
        unordered_map<int,int> mymap;
     
        for(int i = 0; i < numbers.size(); i++){
            int temp = target - numbers[i];
            if(mymap.find(temp) != mymap.end()){// find target - value in mymap.
                return {mymap[temp],i};
            }else{
                mymap[numbers[i]] = i;// store value:index in mymap
            }
        }
        return {-1,-1};// if doesn't have solution 
    }
