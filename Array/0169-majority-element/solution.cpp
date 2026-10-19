class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int a = 0 ; a < nums.size() ; a++){
            int count = 0;
            for(int b = 0 ; b < nums.size() ; b++){
                if(nums[a] == nums[b]){
                    count++;
                }
            }
            if(count > nums.size()/2){
                return nums[a];
            }
        }
        return -1;
    }
};
