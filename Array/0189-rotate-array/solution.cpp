class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int original = nums.size();
        vector<int>number(original);
        k = k % original;
        for(int a = 0 ; a< original ; a++){
            number[(a+k) % original] = nums[a];
        }
        nums = number;
    }
};
