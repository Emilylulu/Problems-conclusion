    static bool mycompare(Interval i, Interval j) {
        return i.start < j.start;
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        int size = intervals.size();
        if(size <= 1) return true;
        sort(intervals.begin(),intervals.end(),[](Interval i1, Interval i2) {return i1.start < i2.start;}); // use lamda to sort, use mycompare to comp.
        // sort(intervals.begin(),intervals.end(),mycompare); no() to call mycompare
        for(int i = 0; i < size - 1; i++){
            if(intervals[i].end > intervals[i+1].start) return false;
        }
        return true;
    }
