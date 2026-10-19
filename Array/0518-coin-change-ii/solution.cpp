class Solution {
public:
    int change(int amount, vector<int>& coins) {
        const long long MOD = 1e9+7;  // safe large number
        vector<long long> dp(amount + 1, 0);
        dp[0] = 1;

        for (int c : coins) {
            for (int amt = c; amt <= amount; amt++) {
                dp[amt] = (dp[amt] + dp[amt - c]) % MOD;  // avoid overflow
            }
        }
        return (int)dp[amount];
    }
};
