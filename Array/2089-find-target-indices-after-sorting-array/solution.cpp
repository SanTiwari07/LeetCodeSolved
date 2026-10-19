class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>answer;
        for(int a = 0 ; a < nums.size() ; a++){
            if(nums[a] == target) answer.push_back(a);
        }
        return answer;
    }
};
