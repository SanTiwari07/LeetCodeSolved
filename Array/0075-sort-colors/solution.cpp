class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0 = 0, num1 = 0, num2 = 0;
        for(int a = 0 ; a < nums.size() ; a++){
            if(nums[a] == 0){
                num0++;
            }
            else if(nums[a] == 1){
                num1++;
            }
            else{
                num2++;
            }
        }


        for(int a = 0 ; a < nums.size() ; a++){

            if(a < num0){
                nums[a] = 0;
            }
            else if(num0 <= a && (num0 + num1) > a){
                nums[a] = 1;
            }
            else if((num0 + num1) <= a && (num0 + num1 + num2) > a){
                nums[a] = 2;
            }
        }
    }
};
