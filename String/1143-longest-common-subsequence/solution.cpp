class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int a = 1 ; a <= n ; a++){
            for(int b = 1 ; b <= m ; b++){
                if(text1[a-1] == text2[b-1]){
                    dp[a][b] = 1+dp[a-1][b-1];
                }
                else{
                    dp[a][b] = max(dp[a][b-1],dp[a-1][b]);
                }
            }
        }
        return dp[n][m];
    }
};
