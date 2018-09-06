class Solution {
public:
    /**
     * @param houses: positions of houses
     * @param heaters: positions of heaters
     * @return: the minimum radius standard of heaters
     */
     int binarySearch(vector <int>& houses, int start, int end, int target){
        int mid = (start + end) / 2;
        if(start <= end){
            if(houses[mid] <= target && houses[mid + 1] >= target){
                return min(abs(houses[mid] - target),abs(houses[mid + 1] - target));
                
            }else if(houses[mid] < target){
                binarySearch(houses,mid + 1,end,target); 
            }else{
                binarySearch(houses,start,mid - 1,target);
            }
            
        }
        
         
     }
    int findRadius(vector<int> &houses, vector<int> &heaters) {
        // Write your code here
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int radius = 0;
        int temp;
        for(int i = 0; i < houses.size(); i++){
            if(houses[i] <= heaters[0]){
                temp = abs(heaters[0] - houses[i]);
                
            }else if(houses[i] >= heaters[heaters.size() - 1]){
                temp = abs(houses[i] - heaters[heaters.size() - 1]);
                
            }else{
                temp = binarySearch(heaters,0,heaters.size() - 1,houses[i]);
                
            }
            if(temp > radius){
                radius = temp;
            }
        }
        return radius;
    }
};
