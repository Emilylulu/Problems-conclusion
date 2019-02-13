    int distance(vector<int> point){
    // calculate the distance
        int dis = point[0] * point[0] + point[1] * point[1];
        return dis;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<int> dis;
        vector<vector<int>> res;
        // store all distance in dis
        for(int i = 0; i < points.size(); i++){
            dis.push_back(distance(points[i]));
        }
        // sorting
        sort(dis.begin(),dis.end());
        int disK = dis[K-1];
        // get kth
        for(int i = 0; i< points.size(); i++){
            //cout<<dis[i]<<endl;
            if(distance(points[i]) <= disK){
                res.push_back(points[i]);
            }
        }
        return res;
    }
