class Solution {
public:
    int dp[31];

    int ans(int n){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=ans(n-1)+ans(n-2);
    }

    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return ans(n);
    }
};