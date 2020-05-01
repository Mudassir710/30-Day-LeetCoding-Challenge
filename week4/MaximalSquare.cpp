/*
Mohammed Mudassir Mohiuddin
*/
class Solution {
public:
    int mini(int a, int b, int c){
        return min(min(a,b),c);
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size(),col = row>0 ? matrix[0].size():0;
        int dp[row+1][col+1];
        memset(dp,0,sizeof(dp[0][0])*(row+1)*(col+1));
        int maxsqrlen = 0;
        for(int i=1; i<=row; ++i){
            for(int j=1; j<=col; ++j){
                if(matrix[i-1][j-1] == '1'){
                    dp[i][j] = 1 + mini(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]);
                    maxsqrlen = max(maxsqrlen,  dp[i][j]);
                } 
            }
        }
        return maxsqrlen * maxsqrlen;
        
    }
};