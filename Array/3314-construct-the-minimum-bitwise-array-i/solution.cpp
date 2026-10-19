class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 2) {
                ans[i] = -1;
                continue;
            }

            int x = nums[i];
            int bit = 0;

            // count trailing ones
            while (x & 1) {
                x >>= 1;
                bit++;
            }

            ans[i] = nums[i] ^ (1 << (bit - 1));
        }
        return ans;
    }
};
