class Solution {
public:
    int jkl(int i,int j,vector<vector<int>>grid){
        int sum = grid[i][j];
        grid[i][j] = 0;  
        if (i > 0 && grid[i-1][j] > 0) {
            sum += jkl(i-1, j, grid);
        }
        if (j > 0 && grid[i][j-1] > 0) {
            sum += jkl(i, j-1, grid);
        }
        if (i < grid.size()-1 && grid[i+1][j] > 0) {
            sum += jkl(i+1, j, grid);
        }
        if (j < grid[0].size()-1 && grid[i][j+1] > 0) {
            sum += jkl(i, j+1, grid);
        }
        return sum;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]>0){
                    int num = jkl(i, j, grid);
                    maxi = max(maxi, num);
                }
            }
        }
        return maxi;
    }
};