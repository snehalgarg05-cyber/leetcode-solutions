class Solution {
public:
    int m;
    int n;

    void dfs(vector<vector<int>>& land, int i, int j, 
             int& maxRow, int& maxCol) {
        
        if(i < 0 || i >= m || j < 0 || j >= n || land[i][j] != 1) {
            return;
        }

        land[i][j] = -1;

        maxRow = max(maxRow, i);
        maxCol = max(maxCol, j);

        dfs(land, i + 1, j, maxRow, maxCol);
        dfs(land, i - 1, j, maxRow, maxCol);
        dfs(land, i, j + 1, maxRow, maxCol);
        dfs(land, i, j - 1, maxRow, maxCol);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
        m = land.size();
        n = land[0].size();

        vector<vector<int>> result;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(land[i][j] == 1) {

                    // Top-left corner
                    int maxRow = i;
                    int maxCol = j;

                    dfs(land, i, j, maxRow, maxCol);

                    // [topRow, leftCol, bottomRow, rightCol]
                    result.push_back({i, j, maxRow, maxCol});
                }
            }
        }

        return result;
    }
};