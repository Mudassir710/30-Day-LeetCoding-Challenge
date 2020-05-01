/*
Mohammed Mudassir Mohiuddin

Link For the Problem:- https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3285/

*/

class Solution {
public:
    int maxCrossingSum(vector<int>& nums,int low,int mid,int high){
        int left_max = INT_MIN, sum = 0;
        for(int i = mid; i >= low; --i){
            sum+=nums[i];
            left_max = max(sum, left_max);
        }
        sum=0;
        int right_max = INT_MIN;
        for(int j = mid+1; j<=high; ++j){
            sum+=nums[j];
            right_max = max(sum, right_max);
        }
        return left_max + right_max;
    }
    int maxSubArraySum(vector<int>& nums, int low, int high){
        if(low == high) return nums[low];
        int mid = (high + low)/2; return max(maxSubArraySum(nums,low,mid),max(maxSubArraySum(nums,mid+1,high),maxCrossingSum(nums,low,mid,high)));
    }
    int maxSubArray(vector<int>& nums) {
        return maxSubArraySum(nums, 0, nums.size()-1);
    }
};
