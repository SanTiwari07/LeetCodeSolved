class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        unordered_map<int, int> best;

        // keep max value for each bitmask
        for (int x : nums) {
            best[x] = max(best[x], x);
        }

        long long ans = 0;

        for (auto &[m1, v1] : best) {
            for (auto &[m2, v2] : best) {
                if ((m1 & m2) == 0) {
                    ans = max(ans, 1LL * v1 * v2);
                }
            }
        }

        return ans;
    }
};
