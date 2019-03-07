  static bool mycompare(Interval i, Interval j){
        return i.start < j.start;
    }
    int minMeetingRooms(vector<Interval>& intervals) {
        int size = intervals.size();
        if(size <= 1) return size;
        sort(intervals.begin(),intervals.end(),mycompare);
        vector<int> room; // use a vector to store meeting end time for each room
        for(int i = 0; i < intervals.size(); i++){
            bool tag = false; // initial tag each iterator to see it fit in room or not
            if(room.empty()) {
                room.push_back(intervals[i].end);
                continue;
            }
            for(int j = 0; j < room.size(); j ++){
                if(intervals[i].start >= room[j]){
                    tag = true; // if fit, change tag
                    if(intervals[i].end > room[j]) // update meetint time for room
                        room[j] = intervals[i].end;
                    break;
                }
            }
            if(!tag){ // if not fit, push a new room and store meeting end time
                room.push_back(intervals[i].end); if not 
            }
        }
        return room.size();
    }
