    int helper(string &s, int ind1, int ind2){
        int left = ind1;
        int right = ind2;
        // corner case check, if the input is out of bound
        if(right >= s. size()){
            return 0; 
        }
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left --;
            right ++;
        }
        // return the length of substring
        return right-left-1;
    }
    string longestPalindrome(string &s) {
        // write your code here
        if(s.size() <= 1){
            return s;
        }
        int length;
        string result = s.substr(0,1);
        for(int i = 0; i < s.size(); i++){
            length = helper(s,i,i);
            // test odd length substring
            if(length > result.length()){
                result = s.substr(i-length / 2,length);
            }
            length = helper(s,i,i+1);
            // test even length substring
            if(length > result.length()){
            // be careful about start index
                result = s.substr(i-length / 2 + 1 ,length);
            }
        }
        return result;
    }
