// class Solution {
// public:

//     int m;
//     int n;
// //Because m and n are needed by both numIslands() and dfs().

//     void dfs(vector<vector<char>>& grid, int i, int j){
//         if(i<0 || i>=m || j<0 ||j>=n || grid[i][j]!='1'){
//             return;
//         }
//         grid[i][j]='$';
//         dfs(grid,i+1,j);
//         dfs(grid,i-1,j);
//         dfs(grid,i,j-1);
//         dfs(grid,i,j+1);
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         m = grid.size();
//         n = grid[0].size();
//         int islands=0;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j]=='1'){
//                     dfs(grid,i,j);
//                     islands++;
//                 }
//             }
//         }
//         return islands;
//     }
// };

class Solution {
public:
    int m;
    int n;

    void bfs(vector<vector<char>>& grid, int i, int j) {

        queue<pair<int,int>> q;

        // Starting land is visited
        grid[i][j] = '$';
        q.push({i, j});

        while(!q.empty()) {

            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // DOWN
            if(row + 1 < m && grid[row + 1][col] == '1') {
                grid[row + 1][col] = '$';
                q.push({row + 1, col});
            }

            // UP
            if(row - 1 >= 0 && grid[row - 1][col] == '1') {
                grid[row - 1][col] = '$';
                q.push({row - 1, col});
            }

            // RIGHT
            if(col + 1 < n && grid[row][col + 1] == '1') {
                grid[row][col + 1] = '$';
                q.push({row, col + 1});
            }

            // LEFT
            if(col - 1 >= 0 && grid[row][col - 1] == '1') {
                grid[row][col - 1] = '$';
                q.push({row, col - 1});
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        m = grid.size();
        n = grid[0].size();

        int islands = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] == '1') {
                    bfs(grid, i, j);
                    islands++;
                }
            }
        }

        return islands;
    }
};