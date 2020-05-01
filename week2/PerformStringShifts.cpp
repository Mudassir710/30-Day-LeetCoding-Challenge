/*
Mohammed Mudassir Mohiuddin
*/
class Solution {
public:
    void reverse(string& s, int start, int end){
        while(start < end){
            swap(s[start], s[end]);
            ++start;
            --end;
        }
    }
    string stringShift(string s, vector<vector<int>>& shift) {
        std::ios::sync_with_stdio(false);
	    std::cin.tie(nullptr);
	    std::cout.tie(nullptr);
        int row = shift.size();
        int col = (row != 0) ? shift[0].size() : 0;
        if (!row || !col) return s;
        int count = 0;
        for(int i=0; i<row; ++i){
            if(shift[i][0] == 0){
                count-= shift[i][1];
            }
            else{
                count+= shift[i][1];
            }
        }
        int len = s.length();
        count = count % len;
        if(count < 0) count += len;
        reverse(s, 0, len-1);
        reverse(s, 0, count-1);
        reverse(s, count, len-1);
        return s;
    }
};