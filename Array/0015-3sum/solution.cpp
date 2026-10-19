class Solution {
public:
    // -4 -1 -1 0 1 2 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        for(int a = 0 ;  a < nums.size() ; a++){
            int left = 0;
            int right = nums.size() - 1;
            int target = 0 - nums[a];
            while(left < right){
                if(left == a){
                    left++;
                    continue;
                }
                if(right == a){
                    right--;
                    continue;
                }
                int sum = nums[left]+nums[right];
                if(target < sum){
                    right--;
                }else if(target > sum){
                    left++;
                }
                else{
                    answer.push_back({nums[a],nums[left],nums[right]});
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
            }
        }
        for(auto &v : answer) sort(v.begin(),v.end());
        sort(answer.begin(),answer.end());
        answer.erase(unique(answer.begin(), answer.end()), answer.end());
        return answer;
    }
};
