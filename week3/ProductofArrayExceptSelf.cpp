/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int  temp =1;
        for(int i=0; i<nums.size(); ++i){
            res[i] = temp;
            temp *= nums[i];
        }
        temp = 1;
        for(int i=nums.size()-1; i>=0; --i){
            res[i] *= temp;
            temp *= nums[i]; 
        }
        return res;
    }
};

static vector<int> nums=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return vector<int>{};
}();