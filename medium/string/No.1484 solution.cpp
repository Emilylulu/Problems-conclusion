    string frequentWord(string &s, unordered_set<string> &excludewords) {
        // Write your code here
        map <string,int> mymap;
        string temp = "";
        if(s.size() == 0){
            return "";
        }
        // for(int i = 0; i < s.size(); i++){
        int i = 0;
        while(i < s.size()){
            int start = 0;
            while(isalpha(s[i+start])){
                start++;
            }
            // use substr to get word
            string temp =  s.substr(i,start);
            
            if(temp ==" " || temp.empty()){
            // incase some spaces are consider as a word.
                i++;
                continue;
            }
            if(mymap.find(temp) != mymap.end()){// if already in the map 
                mymap[temp] += 1;
            }else{
                mymap[temp] = 1;// if not in map yet
            }
            i = i + start + 1;

        }

        int times = 0;
        string result;// find the largest frequency, but not include excludewords can also check this when insert to map.
        for(auto word : mymap){
            if(word.second > times && excludewords.find(word.first) == excludewords.end()){
                result = word.first;
                times= word.second;
            }
            
            if(word.second == times && excludewords.find(word.first) == excludewords.end() && word.first[0] < result[0]){
            // consider if two or more have the same most frequency. if these two word have the same start letter, need to sort.
                result = word.first;
                
            }
            //cout << word.first<<" "<<word.second<<endl;
        }
        return result;
    }
