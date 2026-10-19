class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        for(int a = 0; a < nums.size(); a++) {

            if(nums[a] == original) {
                original *= 2;
                a = -1; 
            }
        }

        return original;
    }
};
