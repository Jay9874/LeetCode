class Solution {
public:
   int dfs(vector<vector<int>> &grid, int i, int j, int n, int m){
       if(i < 0 || j < 0 || i > (n-1) || j > (m-1) || !grid[i][j]) return 0;
       grid[i][j] = 0;
       return 1 + dfs(grid, i-1, j, n, m) + dfs(grid, i+1, j, n, m) + dfs(grid, i, j-1, n, m) + dfs(grid, i, j+1, n, m);
   }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int n = grid.size(), maxArea = 0;
        for(int i=0; i<n; i++){
            int m = grid[i].size(), currArea = 0;

            for(int j=0; j<m; j++){
                currArea = dfs(grid, i, j, n, m);
                maxArea = max(maxArea, currArea);
            }
        }
        return maxArea;
    }
};