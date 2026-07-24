class Solution {
public:
    int ar;
    void dfs(vector<vector<int>>& grid, int m, int n, int i, int j) {
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0)
            return;

        grid[i][j] = 0;
        ar++;
        dfs(grid, m, n, i + 1, j);
        dfs(grid, m, n, i - 1, j);
        dfs(grid, m, n, i, j + 1);
        dfs(grid, m, n, i, j - 1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int mx = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ar=0;
                if(grid[i][j] == 1) {
                   dfs(grid, m, n, i, j);
                   mx=max(mx,ar);
                }
            }
        }
        return mx;

    }
};