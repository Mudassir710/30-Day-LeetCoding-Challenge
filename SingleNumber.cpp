/*
Mohammed Mudassir Mohiuddin

Link For the Problem:- https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3283/
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num =0;
        for(auto res: nums)
            num ^= res;
        return num;
    }
};