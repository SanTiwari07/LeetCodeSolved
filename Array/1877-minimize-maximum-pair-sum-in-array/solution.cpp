class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        vector<int>sum;
        while(left < right){
            sum.push_back(nums[left]+nums[right]);
            left++;
            right--;
        }
        sort(sum.begin(),sum.end());
        return sum[sum.size()-1];
    }
};
