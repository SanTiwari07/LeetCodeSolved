class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int num1=0;
        int num2 = 0;
        for(int a = 0 ; a < nums.size() ; a++){
            num1+=nums[a];
            int x = nums[a];
            while(x > 0){
                num2 += x% 10;
                x/=10;
            }
        }
        return abs(num1 - num2);
    }
};
