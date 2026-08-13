class Solution {
public:
    int m;
    int dp[1001][1001];
    int solve(string& s,string& t,int i,int j){
        if(i>=m||j>=m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==t[j]){
            return dp[i][j] = 1+solve(s,t,i+1,j+1);
        }
        return dp[i][j] = max(solve(s,t,i+1,j),solve(s,t,i,j+1));
    }
    int longestPalindromeSubseq(string s) {
        string t = s;
        m = s.length();
        reverse(t.begin(),t.end());
        memset(dp,-1,sizeof(dp));
        return solve(s,t,0,0);
    }
};