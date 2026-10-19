class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[2]+nums[0]>nums[1]){
        int count = 0;
        if(nums[1] == nums[2]) count++;
        if(nums[2] == nums[0]) count++;
        if(nums[0] == nums[1]) count++;

        if(count == 1) return "isosceles";
        if(count == 3) return "equilateral";
        if(count == 0) return "scalene";
        }
        return "none";
        
    }
};
