class Solution {
public:

    void dfs(int i,int j,vector<vector<int>>&grid,long long &sum){

        int row = grid.size();
        int col = grid[0].size();

        if(i<0 || i>=row || j<0 || j>=col || grid[i][j]==-1) return;

        sum+=grid[i][j];

        grid[i][j] = -1;

        int dr[] = {-1,1,0,0};
        int dc[]= {0,0,-1,1};

        for(int k=0;k<4;++k){

            int newR = i + dr[k];
            int newC = j + dc[k];

            if(newR>=0 && newR <row && newC>=0 && newC<col && grid[newR][newC]>0){
                dfs(newR,newC,grid,sum);
            }
        }

    }
    int countIslands(vector<vector<int>>& grid, int k) {
        
        int row = grid.size();
        int col = grid[0].size();

        int cnt =0;

        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(grid[i][j]>0) {
                    long long sum =0;
                    dfs(i,j,grid,sum);
                    if(sum%k==0)cnt++;
                }
            }
        }

        return cnt;
    }
};