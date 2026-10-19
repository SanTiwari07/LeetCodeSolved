class Solution {
public:
    bool check(vector<int>& nums) {
        int temp = 0;
        for(int a = 0 ; a < nums.size()-1 ; a++){
            if(nums[a]>nums[a+1]){
                temp = a+1;
            }
        }
        for(int a = temp ; a < temp + nums.size()-1 ; a++){
            if(nums[a%nums.size()] > nums[(a+1)%nums.size()]){
                return false;
            }
        }

        return true;
    }
};
