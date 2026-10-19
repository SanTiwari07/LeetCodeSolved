class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0 ;
        for(int a = 0 ;  a < nums.size() ; a++){
            if(nums[a] < k) count++;
        }
        return count;
    }
};
