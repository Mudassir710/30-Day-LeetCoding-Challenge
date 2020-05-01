/*
Mohammed Mudassir Mohiuddin
*/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = row?grid[0].size():0;
        int count =0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == '1'){
                    dfsguide(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
 private:   
    
   void dfsguide(int i,int j,vector<vector<char>>& grid){
        int row = grid.size();
        int col = row?grid[0].size():0;
        
        if(i >=0 && j>=0 && i<row && j<col && grid[i][j] == '1')
        {
            grid[i][j] = '$';
            dfsguide(i+1,j,grid);
            dfsguide(i,j+1,grid);
            dfsguide(i,j-1,grid);
            dfsguide(i-1,j,grid);
            
        }
        else return;
   } 
};