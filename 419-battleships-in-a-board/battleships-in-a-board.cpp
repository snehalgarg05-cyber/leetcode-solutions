class Solution {
public:
    int m;
    int n;

    void dfs(vector<vector<char>>& board, int i, int j){
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]!='X')
        return;
        board[i][j]='Z';
        dfs(board,i+1,j);
        dfs(board,i-1,j);
        dfs(board,i,j+1);
        dfs(board,i,j-1);
    }


    int countBattleships(vector<vector<char>>& board) {
        int count=0;
        m = board.size();
        n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    count++;
                    dfs(board,i,j);
                }
            }
        }
        return count;
    }
};