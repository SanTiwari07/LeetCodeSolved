class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int a = 0 ; a < nums.size() ; a++){
            int ans = -1;
            int pos = 1;
            while((nums[a] & pos) != 0){
                ans = nums[a] - pos;
                pos = pos << 1;
            }
            nums[a]=ans;
        }
        return nums;
    }
};
