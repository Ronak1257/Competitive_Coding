class Solution {
public:
    int jkl(vector<vector<int>>& grid, int i, int j) {
        int sum = grid[i][j];
        grid[i][j] = 0;
        if (i > 0 && grid[i-1][j] > 0) {
            sum += jkl(grid, i-1, j);
        }
        if (j > 0 && grid[i][j-1] > 0) {
            sum += jkl(grid, i, j-1);
        }
        if (i < grid.size()-1 && grid[i+1][j] > 0) {
            sum += jkl(grid, i+1, j);
        }
        if (j < grid[0].size()-1 && grid[i][j+1] > 0) {
            sum += jkl(grid, i, j+1);
        }
        return sum;
    }
    
    int findMaxFish(vector<vector<int>>& grid) {
        int maxi = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] > 0) {
                    int num = jkl(grid, i, j);
                    maxi = max(maxi, num);
                }
            }
        }
        return maxi;
    }
};