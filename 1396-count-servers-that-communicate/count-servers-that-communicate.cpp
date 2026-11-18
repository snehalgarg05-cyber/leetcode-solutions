class Solution {
public:
    int m, n;
    int count = 0;

    bool dfs(vector<vector<int>>& grid, int i, int j) {
        for (int col = 0; col < n; col++) {
            if (col != j && grid[i][col] == 1) {
                return true;
            }
        }
        for (int row = 0; row < m; row++) {
            if (row != i && grid[row][j] == 1) {
                return true;
            }
        }
        return false;
    }

    int countServers(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    if (dfs(grid, i, j)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};