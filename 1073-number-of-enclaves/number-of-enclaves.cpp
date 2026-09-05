class Solution {
public:

    int m, n;

    int dfs(vector<vector<int>>& grid, int i, int j) {

        if (i < 0 || i >= m || j < 0 || j >= n)
            return 0;

        if (grid[i][j] != 1)
            return 0;

        // If this cell is boundary,
        // entire component is invalid
        if (i == 0 || i == m - 1 ||
            j == 0 || j == n - 1) {

            grid[i][j] = -1;

            dfs(grid, i + 1, j);
            dfs(grid, i - 1, j);
            dfs(grid, i, j + 1);
            dfs(grid, i, j - 1);

            return -1;   // component touches boundary
        }

        grid[i][j] = -1;

        int down  = dfs(grid, i + 1, j);
        int up    = dfs(grid, i - 1, j);
        int right = dfs(grid, i, j + 1);
        int left  = dfs(grid, i, j - 1);

        // If any part of component touches boundary
        if (down < 0 || up < 0 || right < 0 || left < 0)
            return -1;

        return 1 + down + up + right + left;
    }

    int numEnclaves(vector<vector<int>>& grid) {

        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 1) {

                    int x = dfs(grid, i, j);

                    if (x > 0)
                        count += x;
                }
            }
        }

        return count;
    }
};