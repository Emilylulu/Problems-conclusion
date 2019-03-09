class RandomizedSet {
public:
    RandomizedSet() {
        // do intialization if necessary
    }

    /*
     * @param val: a value to the set
     * @return: true if the set did not already contain the specified element or false
     */
    bool insert(int val) {
        // write your code here
        if(m.find(val) != m.end()) return false;
        m[val] = size;
        size ++;
        nums.push_back(val);
        return true;
    }

    /*
     * @param val: a value from the set
     * @return: true if the set contained the specified element or false
     */
    bool remove(int val) {
        // write your code here
        if(m.find(val) == m.end()) return false;
        int last = nums.back(); //get the last element value
        m[last] = m[val]; // change last element index to val index
        nums[m[last]] = last; // change index of val value to last element value
        nums.pop_back(); //pop last one
        m.erase(val); // delete val
        size--;
        return true;
    }

    /*
     * @return: Get a random element from the set
     */
    int getRandom() {
        // write your code here
        return nums[rand()%size];
    }
private:
    unordered_map<int,int>m;
    vector<int> nums;
    int size = 0;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param = obj.insert(val);
 * bool param = obj.remove(val);
 * int param = obj.getRandom();
 */
