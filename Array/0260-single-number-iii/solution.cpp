class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int numm1 = 0;
        for(int a = 0 ; a < nums.size() ; a++){
            numm1^=nums[a];
        }
        int rightest_bit = (numm1 & numm1 - 1)&numm1;
        int x= 0,y= 0;
        for(int a = 0 ; a < nums.size(); a++){
            if(nums[a]&rightest_bit){
                x^=nums[a];
            }else{
                y^=nums[a];
            }
        }
        return{x,y};

    }
};
