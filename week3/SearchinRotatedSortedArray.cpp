/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() < 1) return -1;
        if (nums.size() == 1) {
            return nums[0] == target ? 0 : -1;
        }
        int start = 0;
        int end = nums.size() - 1;
        
        while(start < end){
            if(nums[start] == target) return start;
            if(nums[end]   == target) return end;
            int mid = (start + end) / 2;
            if(nums[mid] == target)   return mid;
            
             if (nums[start] < nums[mid]) {
                if (target > nums[mid] || target < nums[start]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            
            // right is sorted
            else  {
                // if target is not within the sorted range then it means
                // the target is within the left unsorted half
                if (target < nums[mid] || target > nums[end]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};