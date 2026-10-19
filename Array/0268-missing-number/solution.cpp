class Solution {
public:
    int summer(int x){
        if(x == 1){
            return 1;
        }
        else if(x == 0){
            return 0;
        }
        else{
            return x + summer(x-1);
        }
    }
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        int sum_1 = summer(size);

        for(int a = 0 ; a< size ; a++){
            sum = sum + nums[a];
        }

        return sum_1 - sum;
    }
};
