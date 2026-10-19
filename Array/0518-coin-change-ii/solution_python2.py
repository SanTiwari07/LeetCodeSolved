class Solution(object):
    def change(self, amount, coins):
        dp = [0] * (amount + 1)
        dp[0] = 1  # 1 way to make 0

        for c in coins:
            for amt in range(c, amount + 1):
                dp[amt] += dp[amt - c]  # add ways

        return dp[amount]
