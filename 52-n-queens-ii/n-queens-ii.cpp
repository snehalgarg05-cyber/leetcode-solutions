class Solution {
public:

    bool check(int n, vector<string>&board,int i,int j){
        
        //upper left diagonal check
        int row=i, col=j;
        while(row>-1 && col>-1){
            if(board[row][col]=='Q'){
                return 0;
            }
            row--,col--;
        }
        //upper right diagonal check
        row=i,col=j;
        while(row>-1 && col<n){
            if(board[row][col]=='Q'){
                return 0;
            }
            row--,col++;
        }
        return 1;
    }

    void find(int row, int n,vector<string> &board,vector<bool>&column,int &count){

        if(row==n){      //base condition
            count++;
            return;
        }

        //put queen at any n position
        for(int j=0;j<n;j++){
            if(column[j]==0 && check(n,board,row,j)){
                column[j]=1;
                board[row][j]='Q';
                find(row+1,n,board,column,count);
                
                //backtracking
                column[j]=0;
                board[row][j]='.';
            }
        }
    }

    int totalNQueens(int n) {
        
        vector<string> board(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        board[i].push_back('.');
        int count=0;

        vector<bool> column(n,0);
        find(0,n,board,column,count);
        
        return count;
    }
};