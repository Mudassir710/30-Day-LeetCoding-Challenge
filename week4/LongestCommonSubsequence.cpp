/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len1 = text1.size();
        int len2 = text2.size();
        int arr[len1+1][len2+1] ;
        //memset (arr,0,sizeof(arr));
        
        for(int i=0; i<=len1; ++i){
            for(int j=0; j<=len2; ++j){
                if(i==0 || j==0) arr[i][j] = 0;
                else if(text1[i-1] == text2[j-1]) arr[i][j] = arr[i-1][j-1] + 1;
                else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
        return arr[len1][len2];
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

