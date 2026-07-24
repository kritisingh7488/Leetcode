class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int m, int n, int i, int j,int & arr) {
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0)
            return;

        grid[i][j] = 0;
        arr++;
        dfs(grid, m, n, i + 1, j,arr);
        dfs(grid, m, n, i - 1, j,arr);
        dfs(grid, m, n, i, j + 1,arr);
        dfs(grid, m, n, i, j - 1,arr);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int mx = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int ar=0;
                if(grid[i][j] == 1) {
                   dfs(grid, m, n, i, j,ar);
                   mx=max(mx,ar);
                }
            }
        }
        return mx;

    }
};