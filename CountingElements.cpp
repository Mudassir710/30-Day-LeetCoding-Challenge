/*
Mohammed Mudassir Mohiuddin
*/


class Solution {
public:
    int countElements(vector<int>& arr) {
        if(arr.size() == 0) return 0;
        int val[10001] = {0};
        for(int i=0; i<arr.size(); i++){
            val[arr[i]] = 1;
        }
        int count =0;
        for(int i=0; i<arr.size(); i++){
            if(val[arr[i] +1] == 1) count++;
        }
        return count;
    }
};