class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int a = 0 ; a < nums.size() ; a++){
            if(a % 2 != 0){
                swap(nums[a],nums[a-1]);
            }
        }
        return nums;
    }
};
