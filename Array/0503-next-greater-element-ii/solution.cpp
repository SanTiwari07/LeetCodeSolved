class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>temp;
        for(int a = 0 ; a < nums.size() ; a++){
            int check = 0;
            for(int b = 1 ; b < nums.size() ; b++){
                if(nums[a]<nums[(a+b)%nums.size()]){
                    temp.push_back(nums[(a+b)%nums.size()]);
                    check = 1;
                    break;
                }
            } 
            if(check == 0) temp.push_back(-1);
        }
        return temp;
    }
};
