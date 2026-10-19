class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int a = 0; a < nums.size(); a++) {
            if (nums[a] != 0) {
                nums[pos++] = nums[a];
            }
        }
        while (pos < nums.size()) {
            nums[pos++] = 0;
        }
    }
};
