/*
Mohammed Mudassir Mohiuddin
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curr_sum = 0;
        int res = 0;
        unordered_map<int, int> seen;
        for(int i=0; i<nums.size(); ++i){
            curr_sum += nums[i];
            if(curr_sum == k) ++res;
            if(seen.find(curr_sum - k) != seen.end())
                res += seen[curr_sum - k];
            seen[curr_sum]++;
        }
        return res;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

