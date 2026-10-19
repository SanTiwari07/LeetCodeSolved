class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>num1;
        vector<int>num2;
        int n1=1;
        num1.push_back(nums[0]);
        for(int a = 1 ; a < nums.size(); a++){
            if(nums.size()/2>n1 && nums[a] != nums[a-1]){
                num1.push_back(nums[a]);
                n1++;
            }else{
                num2.push_back(nums[a]);
            }
        }
        if(num1.size() == num2.size()) return true;

        return false;
    }
};
