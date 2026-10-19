class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        for(int a = 0 ; a< nums.size() ; a++){
            if(nums[a]< 0){
                count++;
            }
            if(nums[a] == 0) return 0;
        }
        if(count % 2 != 0) return -1;
        return 1;
    }
};
