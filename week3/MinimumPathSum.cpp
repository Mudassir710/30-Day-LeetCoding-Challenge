/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    /*int min_path(vector<vector<int>>& grid, int row, int col){
        if(row < 0 || col < 0 ) return INT_MAX;
        if(row == 0 && col == 0) return grid[0][0];
        return grid[row][col] + min(min_path(grid, row-1, col), min_path(grid, row, col-1));
    }*/
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        if(row == 0) return 0;
        int col = grid[0].size();
        int arr[row][col];
        arr[0][0] = grid[0][0];
        for(int i=1 ;i<row; ++i) arr[i][0] = arr[i-1][0] + grid[i][0]; 
        for(int i=1 ;i<col; ++i) arr[0][i] = arr[0][i-1] + grid[0][i];
        for(int i=1; i<row; ++i){
            for(int j=1; j<col; ++j){
                arr[i][j] = grid[i][j] + min(arr[i-1][j], arr[i][j-1]);
            }
        }
        return arr[row-1][col-1];
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

