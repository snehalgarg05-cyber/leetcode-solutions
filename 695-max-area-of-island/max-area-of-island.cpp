class Solution {
public:

    int m,n,count;
    void dfs(vector<vector<int>>& grid,int i, int j){
        if(i>=m || i<0 || j<0 || j>=n|| grid[i][j]!=1){
            return;
        }
        grid[i][j]=-1;
        count++; 
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        count=0;
        int max_count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    count=0;
                    dfs(grid,i,j);
                    max_count = max(max_count,count);
                }
            }
        }   
        return max_count;
    }
};