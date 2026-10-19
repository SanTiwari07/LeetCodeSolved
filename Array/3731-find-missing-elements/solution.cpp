class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>answer;
        answer.push_back(nums[0]);
        for(int a = 1 ; a < (nums.back()-nums[0]+1); a++){
            int temp = (answer[a-1])+1;
            answer.push_back(temp);
        }
        for(int a = 0 ; a < nums.size() ; a++){
            answer.erase(remove(answer.begin(),answer.end(),nums[a]),answer.end());
        }
        return answer;
    }
};
