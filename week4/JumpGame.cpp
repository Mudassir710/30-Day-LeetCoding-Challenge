/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last_pos = nums.size()-1;
        for(int i = nums.size() - 1; i>=0; --i)
            if(i+nums[i] >= last_pos) last_pos = i;
        return (last_pos == 0);
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

