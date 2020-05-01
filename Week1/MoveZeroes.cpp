/*
Mohammed Mudassir Mohiuddin

Link For the Problem:- https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3286/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int k =0;
        for(auto i : nums){
            if(i != 0)
                nums[k++] = i;
        }
        while(k != nums.size()) nums[k++] =0;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

