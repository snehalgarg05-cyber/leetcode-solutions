class Solution {
public:
    
    int m;
    int n;
    int count;
    void dfs(vector<vector<int>>& grid, int i, int j,int &count){
        if(i<0 || i>=m || j<0 ||j>=n || grid[i][j]!=1){
            return;
        }
        count++;
        grid[i][j]=-1;
        dfs(grid,i+1,j,count);
        dfs(grid,i-1,j,count);
        dfs(grid,i,j-1,count);
        dfs(grid,i,j+1,count);
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int max_count=0,count=0;
        int islands=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                count=0;
                if(grid[i][j]==1){
                    dfs(grid,i,j,count);
                    max_count=max(count,max_count);
                    
                    
                }
            }
        }
        return max_count;
    }
};