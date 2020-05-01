/*
Mohammed Mudassir Mohiuddin
*/

class FirstUnique {
public:
    unordered_map<int,int> freq;
    queue<int> q;
    FirstUnique(vector<int>& nums) {
        for(int i=0; i<nums.size(); ++i) add(nums[i]);
    }
    
    int showFirstUnique() {
        while(!q.empty() && freq[q.front()]>=2) q.pop();
        if(q.empty()) return -1;
        return q.front();
    }
    
    void add(int value) {
        q.push(value);
        ++freq[value];
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */