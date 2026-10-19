class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int count = 0;
        for(int a = 1 ; a < nums.size() ; a++){
            if(nums[a] != nums[count]){
                count++;
                nums[count]=nums[a];
            }

        } 
        return count +1;
    }
};
