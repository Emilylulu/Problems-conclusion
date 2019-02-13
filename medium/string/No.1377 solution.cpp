     bool check(string &temp){
         int letter[26];
         memset(letter, 0, sizeof(letter));
         for(int j = 0; j < temp.size(); j++){
             int num = temp[j] - 'a';
             // turn the char into num and start with 0, since it should cooperate with index in letter array.
             if(letter[num] > 0){
                 return false;
             }
             letter[num] ++;
         }
         return true;
     }

    int findSubstring(string &str, int k) {
        // Write your code here
        // if try to find large than 26 distinct substring, not possible
        if(k > 26){
            return 0;
        }
        unordered_set <string> substring;
        for(int i = 0; i + k <= str.size(); i++){
        // use substr to get substring and check in this substring is there any duplicate letter call the check funcion.
            string temp = str.substr(i,k);
            if(check(temp)){
                substring.insert(temp);
            }
        }
        
        return substring.size();
    }
