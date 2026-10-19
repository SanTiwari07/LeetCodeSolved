class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>number;
        for(int a = 0 ; a < nums.size() ;a++){
            if(nums[a] != val){
                number.push_back(nums[a]);
            }
        }
        int k = number.size();
        nums = number;
        return k;
    }
};
