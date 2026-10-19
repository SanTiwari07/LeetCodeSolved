class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int count1 =0;
        int count2 =0;
       for(int a = 0 ; a < nums.size() ; a++){
        if(nums[a] - 9<= 0){
            count1+=nums[a];
        }
        else{
            count2+=nums[a];
        }
        
       }
       
       return (count1 !=  count2); 
    }
};
