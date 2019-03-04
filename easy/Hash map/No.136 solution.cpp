    string mostCommonWord(string &paragraph, vector<string> &banned) {
        // 
        map<string,int> mymap;
        set<string>myset;
        for(int i = 0; i < banned.size(); i++){
            myset.insert(banned[i]); //store banned in set.
        }

        for(int j = 0; j < paragraph.size(); j ++){
            if(!isalpha(paragraph[j])){
                continue; // if it is not alpha, next.
            }
            int k = 0;
            while(isalpha(paragraph[j+k]) && ((j+k) < paragraph.size())){
                paragraph[j+k] = tolower(paragraph[j+k]); // locate the word start and end
                k++;
            }
           string temp = paragraph.substr(j,k); // usr sbustr to get the word
           if(mymap.find(temp) != mymap.end()){
               mymap[temp] += 1; // if in mymap, frequency + 1
           }else{
               mymap[temp] = 1; // if not in mamap, create one
           }
           j = j + k;
        }
        int frequent = 0; // most common word frequency initial to 0
        string result; 
        for(auto s = mymap.begin(); s != mymap.end(); s++){
            if(s->second > frequent && myset.find(s->first) == myset.end()){ // find the greatest frequency word and not in banned
                result = s->first;
                frequent = s->second;
            }
        }
        return result;
    }
