/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    int msb(int n){
        int pos = -1;
        while(n){
            n = n>>1;
            ++pos;
        }
        return pos;
    }
    int rangeBitwiseAnd(int m, int n) {
       int res = 0;
       while(m && n)
       {
           int msb_m = msb(m);
           int msb_n = msb(n);    
           
           if(msb_m != msb_n) break;
           
           int msb_val = (1<<msb_m);
           res += msb_val;
           
           m -= msb_val;
           n -= msb_val;
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

