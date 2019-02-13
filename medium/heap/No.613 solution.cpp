    map<int, double> highFive(vector<Record>& results) {
        // Write your code here
        map<int,vector<int>> scores;
        map<int,double> result;
        for(auto s : results){
            if(scores.find(s.id) == scores.end()){
            // if this student id never seen before
                scores[s.id] = vector<int> (); 
            }
            
            if(scores[s.id].size() < 5){
            // if the record of score not enough 5
                scores[s.id].push_back(s.score);
                //cout<<s.score<<endl;
            }else{
            // if already have 5 scores, store highest 5 scores.
                int index = 0;
                for(int i = 1; i < 5; ++i){
                    if(scores[s.id][i] < scores[s.id][index]){
                        index = i;
                    }
                }
                if(s.score > scores[s.id][index]){
                    scores[s.id][index] = s.score;
                }
            }
        }
        
        for(auto ss : scores){
            vector<int> temp = ss.second;
            double sum = 0;
            // calculate high 5 average
            // keep in mind the result need to be double
            for(int i = 0; i < 5; i++){
                sum += temp[i];
                //cout<<temp[i]<<endl;
            }
            //cout<<sum;
            result[ss.first] = sum/5.0;
        }
        return result;
    }
