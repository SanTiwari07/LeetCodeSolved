class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = nums[0];
        for(int a = 0 ; a < nums.size() ; a++){
            sum+=nums[a];
            if(max < sum){
                max = sum;
            }

            if( sum < 0){
                sum = 0;
            }
        }
        return max;
    }
};
