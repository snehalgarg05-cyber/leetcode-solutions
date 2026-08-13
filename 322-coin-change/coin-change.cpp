class Solution {
public:
    int solve(vector<int>& coins, int amount, vector<int>& memo) {
        if (amount == 0) return 0;
        if (amount < 0)  return 1e9;
        if (memo[amount] != -1) return memo[amount];
        int res = 1e9;
        for (int coin : coins) {
            int sub = solve(coins, amount - coin, memo);
            res = min(res, 1 + sub);
        }
        return memo[amount] = res;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo(amount + 1, -1);
        int ans = solve(coins, amount, memo);
        return ans >= 1e9 ? -1 : ans;
    }
};